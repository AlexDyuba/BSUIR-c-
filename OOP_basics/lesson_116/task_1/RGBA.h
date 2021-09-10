//
// Created by Alex on 9/10/21.
//

#ifndef C__BSUIR_RGBA_H
#define C__BSUIR_RGBA_H
#include <cstdint>

class RGBA {
    std::uint8_t red;
    std::uint8_t green;
    std::uint8_t blue;
    std::uint8_t alpha;

public:

    RGBA(std::uint8_t red = 0, std::uint8_t green = 0, std::uint8_t blue = 0, std::uint8_t alpha = 255);
    void print();
};


#endif //C__BSUIR_RGBA_H
