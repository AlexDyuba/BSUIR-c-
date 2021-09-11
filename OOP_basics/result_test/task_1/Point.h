//
// Created by Alex on 9/11/21.
//

#ifndef C__BSUIR_POINT_H
#define C__BSUIR_POINT_H


class Point {
    double m_a;
    double m_b;

public:
    Point(double a = 0.0, double b = 0.0);

    void print();

    double distanceTo(Point param);

    friend double distanceFrom(Point param1, Point param2);
};


#endif //C__BSUIR_POINT_H
