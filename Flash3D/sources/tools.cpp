#include "sd3d.h"

//------------------------------------------------------------------------------
// d³ugoœæ wektora
//------------------------------------------------------------------------------
float sd3D::length(float *v) {
    float sum = 0.0f;
    for (register int i=0; i<3; ++i) {
        sum += v[i] * v[i];
    }
    return sqrt(sum);
}
//------------------------------------------------------------------------------
// wektor znormalizowany
//------------------------------------------------------------------------------
void sd3D::normalize(float *v) throw(Exception) {
    float len = sd3D::length(v);
    if (len == 0) {
        throw Exception(__FILE__, __LINE__, "Devision by 0 (Try to normalize ve\
ctor with lenght 0");
    }
    for (register int i=0; i<3; ++i) {
            v[i] /= len;
    }
}
//------------------------------------------------------------------------------
// mno¿enie dwóch macierzy
//------------------------------------------------------------------------------
void sd3D::mult(const matrix4x4 a, const matrix4x4 b, matrix4x4 c) {
    for (register int i=0; i<4; ++i) { // rows
        for (register int j=0; j<4; ++j) { // cols
            c[i][j] = 0.0f;
            for (register int k=0; k<4; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
//------------------------------------------------------------------------------
// mono¿enie macierzy przez wektor
//------------------------------------------------------------------------------
void sd3D::mult(const matrix4x4 a, const float4 v, float4 u) {
    for (register int i=0; i<4; ++i) {
        u[i] = 0.0f;
        for (register int j=0; j<4; ++j) {
            u[i] += a[i][j] * v[j];
        }
    }
}
//------------------------------------------------------------------------------
// mno¿enie macierzy przez sta³¹
//------------------------------------------------------------------------------
void sd3D::mult(const matrix4x4 a, const float n, matrix4x4 c) {
    for (register int i=0; i<4; ++i) {
        for (register int j=0; j<4; ++j) {
            c[i][j] *= n;
        }
    }
}
