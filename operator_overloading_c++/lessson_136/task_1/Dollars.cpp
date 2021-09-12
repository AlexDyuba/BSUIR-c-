//
// Created by Alex on 9/12/21.
//

#include "Dollars.h"

Dollars::Dollars(int dollars) : m_dollars{dollars}
{

}

bool operator> (const Dollars &d1, const Dollars &d2)
{
    return d1.m_dollars > d2.m_dollars;
}

bool operator>= (const Dollars &d1, const Dollars &d2)
{
    return d1.m_dollars >= d2.m_dollars;
}

bool operator< (const Dollars &d1, const Dollars &d2)
{
    return !(d2 >= d1);
}

bool operator<= (const Dollars &d1, const Dollars &d2)
{
    return !(d1 > d2);
}