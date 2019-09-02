#include "sd3d.h"

using namespace sd3D;

using namespace std;

//------------------------------------------------------------------------------
Scene::Scene(int width, int height) {
    modeling = 0;               // funckje zwrotne
    triangle = 0;

    this->width = width;
    this->height = height;

    objects = new list<Object*>();

    projection = new Matrix();  // mecierz rzutowania
    projection->identity();
}
//------------------------------------------------------------------------------
void Scene::render(void *data) throw(Exception) {
    // zwr�cenie wyj�tk�w w przypadku nie zdefiniowania funkcji zwrotnych
    if (!modeling) {
        throw Exception(__FILE__, __LINE__,
                    "callback modelingFun not defined");
    }
    if (!triangle) {
        throw Exception(__FILE__, __LINE__,
                    "callback triangleFun not defined");
    }
    // iterowanie po obiektach
    for (list<Object*>::iterator o = objects->begin(); o!= objects->end(); ++o) {
        Object *obj = dynamic_cast<Object*>(*o);

        modeling(obj);  // wywo�anie funkcji zwrotej dla obiektu

        // kopia wierzcho�k�w obiektu
        vector<float*> verticesCpy(obj->vertices->size());

        // iterator po wierzcho�kach
        vector<float*>::iterator vertices = obj->vertices->begin();

        // skopiowanie wierzcho�k�w
        for (unsigned int i=0; i<obj->vertices->size(); ++i) {
            verticesCpy[i] = new float4;
            for (register short j=0; j<3; ++j) {
                verticesCpy[i][j] = vertices[i][j];
            }
            verticesCpy[i][3] = 1.0f;   // wsp�rz�dna W
        }

        // transformacja kopii wierzcho�k�w za pomoc� funkctora TransformFunct
        for_each(verticesCpy.begin(), verticesCpy.end(),
                    TransformFunct(obj->matrix, projection, width, height));

        // narysowanie powierzchni obiektu za pomoc� funktora Renderuj�cego
        for_each(obj->face->begin(), obj->face->end(),
                    FaceRenderFunct(verticesCpy, triangle, data));

        // usuwanie kopii wierzcho�k�w z wektora wska�nik�w
        for (register unsigned int i=0; i<verticesCpy.size(); ++i) {
            delete[] verticesCpy[i];    // usuni�cie tablic
        }
        verticesCpy.clear();    // wyczyszczenie wektora
    }
}
//------------------------------------------------------------------------------
void Scene::setModelingFun(modelingFun fun) {
    modeling = fun;
}
//------------------------------------------------------------------------------
void Scene::setTriangleFun(triangleFun fun) {
    triangle = fun;
}
//------------------------------------------------------------------------------
void Scene::add(Object *o) {
    objects->push_back(o);
}
//------------------------------------------------------------------------------
void Scene::perspective(float f) {
    projection->perspective(f);
}
//------------------------------------------------------------------------------
void Scene::frustum(float l, float r, float b, float t, float n, float f) {
    projection->frustum(l, r, b, t, n, f);
}
//------------------------------------------------------------------------------
Scene::~Scene() {
    delete objects;
    delete projection;
}
//------------------------------------------------------------------------------
