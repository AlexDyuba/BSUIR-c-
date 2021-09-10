//
// Created by Alex on 9/10/21.
//

#include "RGBA.h"
#include <iostream>

RGBA::RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha) :
red{red},
green{green},
blue{blue},
alpha{alpha}
{
}

void RGBA::print() {
    std::cout << "r: = " << static_cast<int>(red) << " g: = " << static_cast<int>(green)
    << " b: = " << static_cast<int>(blue) << " a: = " << static_cast<int>(alpha) << std::endl;
}