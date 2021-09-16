//
// Created by Alex on 9/17/21.
//

#include "Average.h"

Average::Average(int32_t sum, int8_t amount) :
m_sum{sum},
m_amount{amount}
{

}

Average& Average::operator+=(const int32_t& num) {
    m_sum += num;
    m_amount++;
    return *this;
}

std::ostream &operator<<(std::ostream &out, Average &average) {
    out << average.m_sum / average.m_amount;
    return out;
}

