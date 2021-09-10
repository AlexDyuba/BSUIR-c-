//
// Created by Alex on 9/10/21.
//

#ifndef C__BSUIR_STACK_H
#define C__BSUIR_STACK_H

class Stack {

    int size[10];
    int length;

public:

    void reset();

    bool push(int);

    int pop();

    void print();
};


#endif //C__BSUIR_STACK_H
