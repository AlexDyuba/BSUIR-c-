//
// Created by Alex on 9/10/21.
//

#ifndef C__BSUIR_BALL_H
#define C__BSUIR_BALL_H

#include <string>

class Ball {
    std::string m_color;
    double m_radius;

public:
    Ball(int);
    Ball(const std::string &color = "Red", double radius = 20.0);
    void print();
};


#endif //C__BSUIR_BALL_H
