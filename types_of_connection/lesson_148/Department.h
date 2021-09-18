//
// Created by Alex on 9/18/21.
//

#ifndef C__BSUIR_DEPARTMENT_H
#define C__BSUIR_DEPARTMENT_H
#include "Worker.h"
#include <vector>
class Worker;

class Department {
    std::vector<Worker*> workers;

public:
    Department();

    void add(Worker *worker);

    friend std::ostream& operator<<(std::ostream& out,const Department&);
};


#endif //C__BSUIR_DEPARTMENT_H
