//
// Created by Alex on 9/10/21.
//

#include "Numbers.h"
#include <iostream>

void Numbers::setValue(int m_a, int m_b, int m_c) {
    this->m_a = m_a;
    this->m_b = m_b;
    this->m_c = m_c;
}

void Numbers::print() {
    std::cout << m_a << ", " << m_b  << ", " << m_c << std::endl;
}

bool Numbers::isEqual(Numbers numbers) {
    return (this->m_a == numbers.m_a && this->m_b == numbers.m_b && this->m_c == numbers.m_c);
}
