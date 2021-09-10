//
// Created by Alex on 9/10/21.
//

#include "Thing.h"
#include <iostream>

using namespace std;

Thing::Thing() {

}

// Конструктор с параметром color (для radius предоставлено значение по умолчанию)
Thing::Thing(const std::string &color) : m_color(color)
{

}

// Конструктор с параметром radius (для color предоставлено значение по умолчанию)
Thing::Thing(double radius) : m_radius(radius)
{

}

// Конструктор с параметрами color и radius
Thing::Thing(const std::string &color, double radius) : m_color(color), m_radius(radius)

{

}

void Thing::print() {
    std::cout << "color: " << m_color << " and radius: " << m_radius << '\n';
}
