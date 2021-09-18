//
// Created by Alex on 9/18/21.
//

#ifndef C__BSUIR_WORKER_H
#define C__BSUIR_WORKER_H

#include<iostream>

class Worker {

    std::string m_name;

public:

    Worker(std::string name = nullptr);

    std::string getName();

};


#endif //C__BSUIR_WORKER_H
