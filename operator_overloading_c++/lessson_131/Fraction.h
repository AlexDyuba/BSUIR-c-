//
// Created by Alex on 9/12/21.
//

#ifndef C__BSUIR_FRACTION_H
#define C__BSUIR_FRACTION_H


class Fraction {
public:
    Fraction(int firstValue = 0, int secondValue = 0);

    void print();

    friend Fraction operator*(Fraction, Fraction);

    friend Fraction operator*(int f1, Fraction f2);

    friend Fraction operator*(Fraction f1, int f2);

    Fraction reduce();
private:
    int m_firstValue;
    int m_secondValue;
    int nod(int a, int b) {
        return (b == 0) ? (a > 0 ? a : -a) : nod(b, a % b);
    }
};


#endif //C__BSUIR_FRACTION_H
