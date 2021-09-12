//
// Created by Alex on 9/12/21.
//

#include "Frection1.h"
#include <iostream>

using namespace std;

Frection1::Frection1(int numerator, int denominator) :
        m_numerator(numerator), m_denominator(denominator)
{
    reduce();
}

int Frection1::nod(int a, int b)
{
    return b == 0 ? a : nod(b, a % b);
}

void Frection1::reduce()
{
    int nod = Frection1::nod(m_numerator, m_denominator);
    m_numerator /= nod;
    m_denominator /= nod;
}

void Frection1::print()
{
    std::cout << m_numerator << "/" << m_denominator << "\n";
}

Frection1 operator*(const Frection1 &f1, const Frection1 &f2) {
    return {f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator};
}

Frection1 operator*(const Frection1 &f1, int value) {
    return {f1.m_numerator * value, f1.m_denominator};
}

Frection1 operator*(int value, const Frection1 &f1) {
    return {f1.m_numerator * value, f1.m_denominator};
}

std::istream &operator>>(istream & in, Frection1& frection) {
    in >> frection.m_numerator;
    in >> frection.m_denominator;
    return in;
}

std::ostream &operator<<(ostream & out, Frection1& frection) {
    out << frection.m_numerator << "/" << frection.m_denominator;
    return out;
}
