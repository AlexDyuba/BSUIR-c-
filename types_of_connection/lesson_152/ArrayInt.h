//
// Created by Alex on 9/18/21.
//

#ifndef C__BSUIR_ARRAYINT_H
#define C__BSUIR_ARRAYINT_H

#include <iostream>

class ArrayInt {
private:
    int m_length;
    int *m_data;
public:
    ArrayInt();

    ArrayInt(int length);

    ArrayInt(const std::initializer_list<int> &list);

    ~ArrayInt();

    int& operator[](int index);

    ArrayInt& operator=(const std::initializer_list<int>&);

    int getLength() const;
};


#endif //C__BSUIR_ARRAYINT_H
