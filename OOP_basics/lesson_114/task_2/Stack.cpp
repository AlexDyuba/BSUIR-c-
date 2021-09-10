//
// Created by Alex on 9/10/21.
//

#include "Stack.h"
#include <cassert>
#include <iostream>

void Stack::reset() {
    for (int i = 0; i < 10; ++i) {
        size[i] = 0;
    }
    length = 0;
}

bool Stack::push(int number) {
    if(length == 10) {
        return false;
    }
    else {
        size[length++] = number;
        return true;
    }
}

int Stack::pop() {
    assert(length > 0);

    return size[--length];
}

void Stack::print() {
    std::cout << "( ";
    for (int i = 0; i < length; ++i) {
        std::cout << size[i] << " ";
    }
    std::cout << ")";
    std::cout << std::endl;
}
