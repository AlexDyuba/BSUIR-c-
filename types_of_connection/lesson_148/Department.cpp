//
// Created by Alex on 9/18/21.
//

#include "Department.h"

Department::Department()
{

}

void Department::add(Worker *worker) {
    workers.push_back(worker);
}

std::ostream &operator<<(std::ostream &out, const Department &department) {
    out << "Department: ";
    for (auto worker : department.workers) {
        out << worker->getName() << " ";
    }
    out << std::endl;
    return out;
}
