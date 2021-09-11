//
// Created by Alex on 9/11/21.
//

#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point(double a, double b) : m_a{a}, m_b{b}
{

}

void Point::print() {
    cout << m_a << ", " << m_b << endl;
}

double Point::distanceTo(Point param) {
    return sqrt((this->m_a - param.m_a) * (this->m_a - param.m_a) +
    (this->m_b - param.m_b) * (this->m_b - param.m_b));
}

double distanceFrom(Point param1, Point param2) {
    return sqrt((param1.m_a - param2.m_a) * (param1.m_a - param2.m_a) +
    (param1.m_b - param2.m_b) * (param1.m_b - param2.m_b));
}
