//
// Created by Alex on 9/14/21.
//

#include "GradeMap.h"
#include <iostream>

char& GradeMap::operator[](string name) {
    for (auto i : GradeMap::m_map) {
        if (i.name == name) {
            return i.mark;
        }
    }
    GradeMap::m_map.push_back(StudentGrade{name, ' '});

    return GradeMap::m_map.back().mark;
}

GradeMap::GradeMap() {

}
