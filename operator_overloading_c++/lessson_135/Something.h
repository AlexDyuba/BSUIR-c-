//
// Created by Alex on 9/12/21.
//

#ifndef C__BSUIR_SOMETHING_H
#define C__BSUIR_SOMETHING_H


class Something {
private:
    double m_a, m_b, m_c;

public:
    Something(double a = 0.0, double b = 0.0, double c = 0.0);


    // Конвертируем объект класса Something в отрицательный
    Something operator- () const;

    bool operator! () const;

    Something operator+ () const;

    double getA();
    double getB();
    double getC();
};


#endif //C__BSUIR_SOMETHING_H
