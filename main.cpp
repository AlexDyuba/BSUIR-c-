#include <iostream>
#include "OOP_basics/lesson_113/task_1/Numbers.h"
#include "OOP_basics/lesson_114/task_1/Numbers.h"
#include "OOP_basics/lesson_114/task_2/Stack.h"
#include "OOP_basics/lesson_115/task_1/Ball.h"

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

//    Lesson 114 task 2
//    Stack stack;
//    stack.reset();
//
//    stack.print();
//
//    stack.push(3);
//    stack.push(7);
//    stack.push(5);
//    stack.print();
//
//    stack.pop();
//    stack.print();
//
//    stack.pop();
//    stack.pop();
//
//    stack.print();
    Ball def;
    def.print();

    Ball black("black");
    black.print();

    Ball thirty(30.0);
    thirty.print();

    Ball blackThirty("black", 30.0);
    blackThirty.print();

    return 0;
}
