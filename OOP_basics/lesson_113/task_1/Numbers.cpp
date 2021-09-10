//
// Created by alexdyuba on 10.09.21.
//

#include "Numbers.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Numbers::set(int first_number, int second_number) {
    this->first_number = first_number;
    this->second_number = second_number;
}

void Numbers::print() {
    cout << first_number << setw(4) << second_number;
}
