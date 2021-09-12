//
// Created by Alex on 9/12/21.
//

#include "Car.h"
#include <iostream>

Car::Car(std::string company, std::string model)
: m_company(company), m_model(model)
{

}

bool operator== (const Car &c1, const Car &c2)
{
    return (c1.m_company == c2.m_company &&
            c1.m_model== c2.m_model);
}

bool operator!= (const Car &c1, const Car &c2)
{
    return !(c1== c2);
}

bool operator< (const Car &c1, const Car &c2) {
    if (c1.m_company < c2.m_company)
        return true;
    if (c1.m_company > c2.m_company)
        return false;
    if (c1.m_model < c2.m_model)
        return true;
    if (c1.m_model > c2.m_model)
        return false;

    return false;
}

std::ostream &operator<<(std::ostream& out, Car car) {
    out << car.m_company << ", " << car.m_model << std::endl;
    return out;
}
