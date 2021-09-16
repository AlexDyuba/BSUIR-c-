//
// Created by Alex on 9/17/21.
//

#ifndef C__BSUIR_INTARRAY_H
#define C__BSUIR_INTARRAY_H

#include <iostream>

class IntArray {
    int m_size;
    int *m_array;
public:

     IntArray(int size = 0);
     IntArray(const IntArray&);
     ~IntArray();
     IntArray& operator=(const IntArray&);
     friend std::ostream& operator<< (std::ostream& out, IntArray&);
     int& operator[](const int&);
     static IntArray fillArray();

};


#endif //C__BSUIR_INTARRAY_H
