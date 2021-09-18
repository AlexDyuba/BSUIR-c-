//
// Created by Alex on 9/18/21.
//

#include "Worker.h"
#include <iostream>

Worker::Worker(std::string name) : m_name{name}
{

}

std::string Worker::getName() {
    return m_name;
}