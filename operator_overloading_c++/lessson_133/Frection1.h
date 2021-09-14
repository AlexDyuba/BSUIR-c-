//
// Created by Alex on 9/12/21.
//

#ifndef C__BSUIR_FRECTION1_H
#define C__BSUIR_FRECTION1_H

#include <iostream>

class Frection1 {
private:
    int m_numerator;
    int m_denominator;

public:
    Frection1(int numerator=0, int denominator=1);

    static int nod(int a, int b);

    void reduce();

    friend Frection1 operator*(const Frection1 &f1, const Frection1 &f2);
    friend Frection1 operator*(const Frection1 &f1, int value);
    friend Frection1 operator*(int value, const Frection1 &f1);

    friend std::ostream& operator<<(std::ostream&, Frection1);

    friend std::istream& operator>>(std::istream&, Frection1&);

    void print();
};

#endif //C__BSUIR_FRECTION1_H
