#include "sd3d.h"

using namespace sd3D;


template<class T, int size> void print(T *e) {
    cout << "[";
    for (register int i=0; i<size; ++i) {
        cout << e[i] << " ";
    }
    cout << "]" << endl;
}
//------------------------------------------------------------------------------
Object::Object(string filename) throw(Exception) {
    matrix = new Matrix(); // inicjacja macierzy obiektu
    matrix->identity();

    FILE *file = fopen(filename.c_str(), "rb");
    if (!file) {
        delete matrix;  // usuni�cie macierzy przed wyrzuceniem wyj�tku
        throw Exception(__FILE__, __LINE__, "file "+filename+" not found");
    }
    int vertexCount, faceCount;
    // wczytanie liczby wierzcho�k�w i tr�jk�t�w
    fread(&vertexCount, sizeof(int), 1, file);
    fread(&faceCount, sizeof(int), 1, file);

    // wczytanie wierzcho�k�w z pliku
    vertices = new vector<float*>(vertexCount);
    vector<float*>::iterator v = vertices->begin();
    for (int i=0; i<vertexCount; ++i) {
        v[i] = new float[3];
        if (fread(v[i], sizeof(float), 3, file) != 3) {
            delete matrix; // usuni�cie macierzy przed wyrzuceniem wyj�tku
            throw Exception(__FILE__, __LINE__, "file "+filename+" corrupted");
        }
    }
    // wy�ietlenie tablicy wierzcho�k�w (debug)
    //for_each(vertices->begin(), vertices->end(), print<float, 3>);

    // wczytanie tr�jk�t�w z pliku
    face = new vector<int*>(faceCount);
    vector<int*>::iterator f = face->begin();
    for (int i=0; i<faceCount; ++i) {
        f[i] = new int[3];
        if (fread(f[i], sizeof(int), 3, file) != 3) {
            delete matrix;  // usuni�cie macierzy przed wyrzuceniem wyj�tku
            throw Exception(__FILE__, __LINE__, "file "+filename+" corrupted");
        }
    }
    fclose(file);
}
//------------------------------------------------------------------------------
Object::Object(int nv, float vertices[][3], int nf, int face[][3]) {
    matrix = new Matrix();
    matrix->identity();

    this->vertices = new vector<float*>(nv);      // tworznie wektor�w wierzcho�k�w
    vector<float*>::iterator v = this->vertices->begin();
    for (unsigned int i=0; i<this->vertices->size(); ++i) {
        v[i] = new float[3];
        for (register int j=0; j<3; ++j) {
            v[i][j] = vertices[i][j];
        }
    }

    this->face = new vector<int*>(nf);            // i tr�jk�t�w
    vector<int*>::iterator f=this->face->begin();
    for (unsigned int i=0; i<this->face->size(); ++i) {
        f[i] = new int[3];
        for (register int j=0; j<3; ++j) {
            f[i][j] = face[i][j];
        }
    }
}
//------------------------------------------------------------------------------
void Object::move(float x, float y, float z) {
    matrix->translate(x, y, z);
}
//------------------------------------------------------------------------------
void Object::scale(float x, float y, float z) {
    matrix->scale(x, y, z);
}
//------------------------------------------------------------------------------
void Object::rotate(float angle, float x, float y, float z) {
    matrix->rotate(angle, x, y, z);
}
//------------------------------------------------------------------------------
void Object::resetPosition() {
    matrix->identity();
}
//------------------------------------------------------------------------------
void Object::setName(string name) {
    this->name = new string(name);
}
//------------------------------------------------------------------------------
string Object::getName() {
    return *name;
}
//------------------------------------------------------------------------------
Object::~Object(){
    delete matrix;
    // usuni�cie wierzcho�k�w
    for (vector<float*>::iterator i=vertices->begin(); i!=vertices->end(); ++i) {
        delete[] *i;
    }
    delete vertices;
    // usuni�cie tr�k�t�w
    for (vector<int*>::iterator i=face->begin(); i!=face->end(); ++i) {
        delete[] *i;
    }
    delete face;
    // je�li zdefiniowano nazw�
    if (name) {
        delete name;
    }
}
//------------------------------------------------------------------------------
