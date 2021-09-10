//
// Created by Alex on 9/10/21.
//

#ifndef C__BSUIR_THING_H
#define C__BSUIR_THING_H

#include <string>
#include <iostream>

class Thing
{
private:
    std::string m_color = "blue";
    double m_radius = 20;

public:
    // Конструктор по умолчанию без параметров
    Thing();

    // Конструктор с параметром color (для radius предоставлено значение по умолчанию)
    Thing(const std::string &color);

    // Конструктор с параметром radius (для color предоставлено значение по умолчанию)
    Thing(double radius);

    // Конструктор с параметрами color и radius
    Thing(const std::string &color, double radius);

    void print();
};


#endif //C__BSUIR_THING_H
