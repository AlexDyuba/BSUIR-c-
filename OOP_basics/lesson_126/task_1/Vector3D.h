//
// Created by Alex on 9/11/21.
//

#ifndef C__BSUIR_VECTOR3D_H
#define C__BSUIR_VECTOR3D_H

#include "Point3D.h"

class Point3D;

class Vector3D
{
private:
    double m_x, m_y, m_z;

public:
    Vector3D(double x = 0.0, double y = 0.0, double z = 0.0);

    void print();

    friend void Point3D::moveByVector(const Vector3D &v);
};


#endif //C__BSUIR_VECTOR3D_H
