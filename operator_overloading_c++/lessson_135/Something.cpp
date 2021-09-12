//
// Created by Alex on 9/12/21.
//

#include "Something.h"
Something::Something(double a, double b, double c) :
        m_a(a), m_b(b), m_c(c)
{
}

// Конвертируем объект класса Something в отрицательный
Something Something::operator- () const
{
    return Something(-m_a, -m_b, -m_c);
}

Something Something::operator+ () const
{
    return {m_a, m_b, m_c};
}

bool Something::operator! () const
{
    return (m_a == 0.0 && m_b == 0.0 && m_c == 0.0);
}

double Something::getA() { return m_a; }
double Something::getB() { return m_b; }
double Something::getC() { return m_c; }