#include "sd3d.h"

using namespace sd3D;

using namespace std;

//------------------------------------------------------------------------------
void Matrix::rotate(float angle, float x, float y, float z) {
    float rad = angle * M_PI / 180.0f;
    float
        ox_cosA = cos(x * rad),         // sinusy i cosinusy dla poszczególnych
        ox_sinA = sin(x * rad),         // macierzy
        oy_cosA = cos(y * rad),
        oy_sinA = sin(y * rad),
        oz_cosA = cos(z * rad),
        oz_sinA = sin(z * rad);

    matrix4x4 ox, oy, oz, result;
    ident(ox); ident(oy); ident(oz);    // macierze jednostkowe

    ox[1][1] = ox_cosA;    ox[1][2] = - ox_sinA;
    ox[2][1] = ox_sinA;    ox[2][2] = ox_cosA;

    oy[0][0] = oy_cosA;    oy[0][2] = - oy_sinA;
    oy[2][0] = oy_sinA;    oy[2][2] = oy_cosA;

    oz[0][0] = oz_cosA;    oz[0][1] = -oz_sinA;
    oz[1][0] = oz_sinA;    oz[1][1] = oz_cosA;

    sd3D::mult(matrix, ox, result);             // wymno¿enie macierzy
    cpy(result);
    sd3D::mult(matrix, oy, result);
    cpy(result);
    sd3D::mult(matrix, oz, result);
    cpy(result);
}
//------------------------------------------------------------------------------
void Matrix::translate(float x, float y, float z) {
    matrix4x4 tr;
    ident(tr);
    tr[0][3] = x;
    tr[1][3] = y;
    tr[2][3] = z;
    mult(tr);
}
//------------------------------------------------------------------------------
void Matrix::translate(float4 v) {
    matrix4x4 tr;
    ident(tr);
    tr[0][3] = v[0];
    tr[1][3] = v[1];
    tr[2][3] = v[2];
    mult(tr);
}
//------------------------------------------------------------------------------
void Matrix::ident(matrix4x4 a) {
    memset(a, 0, sizeof(matrix4x4));
    a[0][0] = a[1][1] = a[2][2] = a[3][3] = 1.0f;
}
//------------------------------------------------------------------------------
void Matrix::scale(float x, float y, float z) {
    matrix4x4 sc;
    ident(sc);
    sc[0][0] = x;
    sc[1][1] = y;
    sc[2][2] = z;
    mult(sc);
}
//------------------------------------------------------------------------------
void Matrix::transform(float &x, float &y, float &z) {
    float4 tmp = {0.0f, 0.0f, 0.0f, 1.0f};
    float4 v = {x, y, z, 1};
    sd3D::mult(matrix, v, tmp);
    x = tmp[0];
    y = tmp[1];
    z = tmp[2];
}
//------------------------------------------------------------------------------
void Matrix::transform(float4 v) {
    float4 tmp = {0.0f, 0.0f, 0.0f, 1.0f};     //
    sd3D::mult(matrix, v, tmp);
    memcpy(v, tmp, sizeof(float4));
}
//------------------------------------------------------------------------------
void Matrix::perspective(float f) {
    matrix4x4 persp;
    ident(persp);
    persp[3][2] = 1.0f / f;
    persp[3][3] = 0.0f;
    mult(persp);
}
//------------------------------------------------------------
// left, right, bottom, top, near, far
//------------------------------------------------------------
void Matrix::frustum(float l, float r, float b, float t, float n, float f) {
    matrix4x4 tmp = {
        { (r - l)/(2 * n),                 0,                      0,      (r + l) / (2 * n)},
        {               0, (t - b) / (2 * n),                      0,      (t + b) / (2 * n)},
        {               0,                 0,                      0,                     -1},
        {               0,                 0, -(f - n) / (2 * f * n),  (f + n) / (2 * f * n)},
    };
    mult(tmp);
}
//------------------------------------------------------------------------------
/*
ostream& operator<<(ostream &s, Matrix m) {
    for (register int i=0; i<4; ++i) {
        s << "[ ";
        for (register int j=0; j<4; ++j) {
            s << m.matrix[i][j] << " ";
        }
        s << "]" << endl;
    }
    return s;
}
*/
