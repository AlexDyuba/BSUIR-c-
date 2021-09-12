//
// Created by Alex on 9/12/21.
//

#include "Fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction(int firstValue, int secondValue) :
m_firstValue{firstValue},
m_secondValue{secondValue}
{

}

Fraction Fraction::reduce() {
    int NOD = Fraction::nod(this->m_firstValue, this->m_secondValue);
    return {m_firstValue /  NOD, m_secondValue / NOD};
}

void Fraction::print() {
    cout << m_firstValue << "/" << m_secondValue << endl;
}

Fraction operator*(Fraction f1, Fraction f2) {
    return Fraction{f1.m_firstValue * f2.m_firstValue, f1.m_secondValue * f2.m_secondValue}
    .reduce();
}

Fraction operator*(int f1, Fraction f2) {
    return Fraction{f1 * f2.m_firstValue, f2.m_secondValue}.reduce();
}

Fraction operator*(Fraction f1, int f2) {
    return Fraction{f1.m_firstValue * f2, f1.m_secondValue}.reduce();
}
