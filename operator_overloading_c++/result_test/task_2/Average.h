//
// Created by Alex on 9/17/21.
//
#include <cstdint>
#include <iostream>

#ifndef C__BSUIR_AVERAGE_H
#define C__BSUIR_AVERAGE_H

class Average {
    int32_t m_sum;
    int8_t m_amount;

public:
    Average(int32_t sum = 0, int8_t amount = 0);
    Average& operator+= (const int32_t&);
    friend std::ostream& operator<< (std::ostream& out, Average&);
};


#endif //C__BSUIR_AVERAGE_H
