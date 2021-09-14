//
// Created by Alex on 9/14/21.
//

#ifndef C__BSUIR_GRADEMAP_H
#define C__BSUIR_GRADEMAP_H

#include <vector>
#include <string>

using namespace std;

struct StudentGrade {
    string name;
    char mark;
};

class GradeMap {
    vector<StudentGrade> m_map;

public:
    GradeMap();

    char& operator[] (string);

};


#endif //C__BSUIR_GRADEMAP_H
