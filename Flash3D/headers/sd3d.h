#ifndef __SE3D__H__
#define __SE3D__H__

#include <vector>
#include <iostream>
#include <list>
#include <string>

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;


// simple driver 3D
namespace sd3D{
    //--------------------------------------------------------------------------
    // wyj�tek zwracany przez klasy Scene i Object
    class Exception: public std::exception{
        private:
            string message;
        public:
            Exception(string file, int line, string message) {
                int strSize = line / 10 + 1;
                char *c = new char[strSize];
                itoa(line, c, 10);
                this->message = "exception in file " + file + " at line " + c + \
                " with message:\n" + message;
                delete[] c;
            }
            const char* what() const throw(){
                return message.c_str();
            }
            ~Exception() throw(){}
    };

    //--------------------------------------------------------------------------
    // dodatkowe funkcje i typy danych
    typedef float matrix4x4[4][4];  //macierz
    typedef float float4[4];        //wektor we wsp�rz�dnych jednorodnych

    float length(float *v);                                 // d�ugo�� wektora
    void normalize(float *v)throw(Exception);               // normalizacja

    inline void normal(float *v1, float *v2, float *n) {    // wektor normalny
        n[0] = v1[2] * v2[1] - v1[1] * v2[2];               // iloczyn wektorowy
        n[1] = v1[0] * v2[2] - v1[2] * v2[0];               // cross_produkt
        n[2] = v1[0] * v2[1] - v1[1] * v2[0];
    }
    // mno�enie macierzy przez:
    void mult(const matrix4x4 a, const matrix4x4 b, matrix4x4 c);   // macierz
    void mult(const matrix4x4 a, const float4 v, float4 u);         // wektor
    void mult(const matrix4x4 a, const float n, matrix4x4 c);       // sta��

    //--------------------------------------------------------------------------
    // Klasa obs�ugujaca manipulacje na macierzach 4x4. Implementuj�ca podstawowe
    // operacje dla grafiki 3D obr�t, skalowanie, macierz jednostkow�, przesuni�cie
    // mno�enie przez macierz i wektor oraz rzutowanie perspektywistyczne
    class Matrix{
        private:
            matrix4x4 matrix;
            void ident(matrix4x4 a);
            inline void mult(const matrix4x4 m) {
                matrix4x4 tmp;
                sd3D::mult(matrix, m, tmp);
                memcpy(matrix, tmp, sizeof(matrix4x4));
            }
            inline void cpy(const matrix4x4 m){
                memcpy(matrix, m, sizeof(matrix4x4));
            }
        public:
            void rotate(float angle, float x, float y, float z);
            void translate(float x, float y, float z);
            void translate(float4 v);
            void scale(float x, float y, float z);
            inline void identity(void) {
                ident(matrix);
            }
            void transform(float &x, float &y, float &z);
            void transform(float4 v);

            void perspective(float f);
            void frustum(float l, float r, float b, float t, float n, float f);

            //friend ostream& operator<<(ostream &s, Matrix m);
            void test(void); // sprawdza mno�enie macierzy i wektora przez macierz
    };

    //--------------------------------------------------------------------------
    // kasa reprezentuj�ca obiekt w przestrzeni 3D
    class Object{
        private:
            Matrix *matrix;
            vector<float*> *vertices;
            vector<int*> *face;
            string *name;
        public:
            explicit Object(string filename) throw(Exception);

            Object(int nv, float vertices[][3], int nf, int face[][3]);

            void rotate(float angle, float x, float y, float z);
            void move(float x, float y, float z);
            void scale(float x, float y, float z);
            void resetPosition();

            void setName(string name);
            string getName();

            ~Object();

            friend class Scene; // klasa Scene ma dost�p do wierzcho�k�w i macierzy
    };
    //--------------------------------------------------------------------------
    // Klasa Scene
    class Scene{
        private:
            // typy wska�nik�w do funkcji zwrotnych
            typedef void (*modelingFun)(Object *o);
            typedef void (*triangleFun)(float *a, float *b, float *c, void *data);
            Matrix *projection;                     // macierz rzutowania
            modelingFun modeling;                   // wska�niki do funkcji zwrotnych
            triangleFun triangle;
            list<Object*> *objects;                  // lista wska�nik�w do obiekt�w
            int width;
            int height;
        public:
            Scene(int width, int height);

            void setModelingFun(modelingFun fun);
            void setTriangleFun(triangleFun fun);
            void add(Object *o);
            void perspective(float f);
            void frustum(float l, float r, float b, float t, float n, float f);

            void render(void *data) throw(Exception);

            ~Scene();

            friend class FaceRenderFunct;
    };
    // -------------------------------------------------------------------------
    // funktor s�u��cy do transformacji wierzcho�ka za pomoc� macierzy
    // modelowania, macierzy projektcji i transformuj�cy go do rozmiaru filmu
    class TransformFunct {
        private:
            Matrix *model, *projection;
            int width, height;
        public:
            TransformFunct(Matrix* &m, Matrix* &p, int &width, int &height) {
                this->width = width;
                this->height = height;
                model = m;
                projection = p;
            }
            void operator() (float *vertex) {   // operator "funkcyjny"
                model->transform(vertex);       // transformacja wierzcho�ka macierz� modelowania
                projection->transform(vertex);  // rzutowanie perspektywistyczne
                if (vertex[3] != 1) {           // przekszta�cenie we
                    for (register short j=0; j<3; ++j) {// wsp�rz�dne jednorodne
                        vertex[j] /= vertex[3];
                    }
                }
                vertex[0] *= height / 2;                // przekszta�cenia
                vertex[1] *= height / 2;                // do powierzchni filmu
                vertex[0] += width / 2;
                vertex[1] += height / 2;
            }
    };
    //--------------------------------------------------------------------------
    // funktor s�u��cy do rysowania tr�jk�ta za pomoc� funkcji zwrotnej triangle
    // U�ywany w funkcji Scene::render (wywo�ywany przez funkcje for_each
    // dla tablicy (vector<int*>) powierzchni (tr�jk�t�w).
    class FaceRenderFunct {
        private:
            Scene::triangleFun triangle;
            vector<float*> vertices;
            void *data;
        public:
            FaceRenderFunct(vector<float*> &vertices,
                                Scene::triangleFun &triangle, void* &data) {
                this->triangle = triangle;
                this->vertices = vertices;
                this->data = data;
            }
            void operator() (int* face) {  // operator "funkcyjny"
                // referencje do punkt�w tr�jk�ta
                float* &a = vertices[face[0]];
                float* &b = vertices[face[1]];
                float* &c = vertices[face[2]];
                // wyznaczenie wektor�w
                float v1[] = {b[0] - a[0], b[1] - a[1], b[2] - a[2]};
                float v2[] = {c[0] - a[0], c[1] - a[1], c[2] - a[2]};
                // obliczenie i znormalizownie normalnej
                float n[3];
                normal(v1, v2, n);
                normalize(n);
                // narysowanie tr�jkata skierowanego do przodu
                if (n[2] < 0) { // wywo�anie funkcji zwrotnej rysuj�cej tr�jk�t
                    triangle(a, b, c, data);
                }
            }
    };
}

#endif
