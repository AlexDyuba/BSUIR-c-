//
// Created by Alex on 9/10/21.
//

#include "Ball.h"
#include <iostream>

using namespace std;


void Ball::print() {
    cout << "color: " << m_color << ", radius: " << m_radius << endl;
}

Ball::Ball(int m_radius) {
    this->m_radius = m_radius;
    this->m_color = "Red";
}

Ball::Ball(const std::string &color, double radius) {
    this->m_color = color;
    this->m_radius = radius;
}
