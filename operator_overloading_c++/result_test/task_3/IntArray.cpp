//
// Created by Alex on 9/17/21.
//

#include "IntArray.h"
#include <iostream>
IntArray::IntArray(int size) : m_size{size} {
    if(size == 0) {
        m_array = nullptr;
    } else {
        m_array = new int[size]{0};
    }
}

IntArray::IntArray(const IntArray &ms) {
    IntArray array(ms.m_size);
    for (int i = 0; i < array.m_size; ++i) {
        array.m_array[i] = ms.m_array[i];
    }
}

IntArray::~IntArray() {
    delete[] m_array;
}

IntArray& IntArray::operator=(const IntArray &array) {
    if(this == &array) {
        return *this;
    }
    delete[] this->m_array;

    this->m_size = array.m_size;
    this->m_array = new int[this->m_size];
    for (int i = 0; i < this->m_size; ++i) {
        this->m_array[i] = array.m_array[i];
    }
    return *this;
}

std::ostream &operator<<(std::ostream &out, IntArray &average) {
    for (int i = 0; i < average.m_size; ++i) {
        out << average.m_array[i] << " ";
    }
    return out;
}

int &IntArray::operator[](const int &index) {
    return this->m_array[index];
}

IntArray IntArray::fillArray()
{
IntArray a(6);
a[0] = 6;
a[1] = 7;
a[2] = 3;
a[3] = 4;
a[4] = 5;
a[5] = 8;

return a;
}

