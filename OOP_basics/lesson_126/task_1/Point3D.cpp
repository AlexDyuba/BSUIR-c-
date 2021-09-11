//
// Created by Alex on 9/11/21.
//

#include "Point3D.h"
#include <iostream>
#include "Vector3D.h"

Point3D::Point3D(double x, double y, double z)
        : m_x(x), m_y(y), m_z(z)
{

}

void Point3D::print()
{
    std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}

void Point3D::moveByVector(const Vector3D &v)
{
    this->m_x += v.m_x;
    this->m_y += v.m_y;
    this->m_z += v.m_z;
}