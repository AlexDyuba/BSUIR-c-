//
// Created by Alex on 9/12/21.
//

#ifndef C__BSUIR_CAR_H
#define C__BSUIR_CAR_H

#include <iostream>

class Car
{
private:
    std::string m_company;
    std::string m_model;

public:
    Car(std::string company, std::string model);

    friend bool operator== (const Car &c1, const Car &c2);
    friend bool operator!= (const Car &c1, const Car &c2);
    friend bool operator< (const Car &c1, const Car &c2);
    friend std::ostream& operator<<(std::ostream&, Car);
};




#endif //C__BSUIR_CAR_H
