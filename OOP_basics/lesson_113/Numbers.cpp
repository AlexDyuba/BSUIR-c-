//
// Created by Alex on 9/10/21.
//

#include "Numbers.h"
#include <iostream>
using namespace std;

void Numbers::set(int first_number, int second_number) {
    this->first_number = first_number;
    this->second_number = second_number;
}

void Numbers::show() {
    cout << first_number << endl;
    cout << second_number << endl;
}

Numbers::Numbers() {

}
