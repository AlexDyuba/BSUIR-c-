#include <iostream>
#include "OOP_basics/lesson_113/task_1/Numbers.h"
#include "OOP_basics/lesson_114/task_1/Numbers.h"
#include "OOP_basics/lesson_114/task_2/Stack.h"

using namespace std;

int main() {
//    Lesson 113
//    Numbers numbers{};
//    numbers.set(1, 2);
//    numbers.print();

//    Lesson 114 Task_1
//    Numbers numbers;
//    numbers.setValue(3, 4, 5);
//    numbers.print();
//    Numbers numbers1;
//    numbers1.setValue(3, 4, 5);
//    if(numbers.isEqual(numbers1)) {
//        cout << "True" << endl;
//    }
//    else {
//        cout << "False" << endl;
//    }

    Stack stack;
    stack.reset();

    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();

    stack.print();
    return 0;
}
