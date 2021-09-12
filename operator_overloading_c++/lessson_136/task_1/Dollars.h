//
// Created by Alex on 9/12/21.
//

#ifndef C__BSUIR_DOLLARS_H
#define C__BSUIR_DOLLARS_H

#include <iostream>

class Dollars
{
private:
    int m_dollars;

public:
    Dollars(int dollars);

    friend bool operator> (const Dollars &d1, const Dollars &d2);
    friend bool operator<= (const Dollars &d1, const Dollars &d2);

    friend bool operator< (const Dollars &d1, const Dollars &d2);
    friend bool operator>= (const Dollars &d1, const Dollars &d2);
};

#endif //C__BSUIR_DOLLARS_H
