#include <iostream>
#include <vector>
#include "OOP_basics/lesson_113/task_1/Numbers.h"
#include "OOP_basics/lesson_114/task_1/Numbers.h"
#include "OOP_basics/lesson_114/task_2/Stack.h"
#include "OOP_basics/lesson_115/task_1/Ball.h"
#include "OOP_basics/lesson_116/task_1/RGBA.h"
#include "OOP_basics/lesson_117/task_1/Thing.h"
#include "OOP_basics/lesson_126/task_1/Point3D.h"
#include "OOP_basics/lesson_126/task_1/Vector3D.h"
#include "OOP_basics/result_test/task_1/Point.h"
#include "OOP_basics/result_test/task_2/Welcome.h"
#include "OOP_basics/result_test/task_3/Monster.h"
#include "OOP_basics/result_test/task_3/MonsterGenerator.h"
#include "OOP_basics/result_test/task_4/Card.h"
#include "OOP_basics/result_test/task_4/Deck.h"
#include "OOP_basics/result_test/task_4/Game.h"
#include "operator_overloading_c++/lessson_131/Fraction.h"
#include "operator_overloading_c++/lessson_133/Frection1.h"
#include "operator_overloading_c++/lessson_135/Something.h"
#include "operator_overloading_c++/lessson_136/task_1/Dollars.h"
#include "operator_overloading_c++/lessson_136/task_2/Car.h"
#include "operator_overloading_c++/lessson_138/task_1/GradeMap.h"


using namespace std;

int main() {
//*********************************    Lesson 113
//    Numbers numbers{};
//    numbers.set(1, 2);
//    numbers.print();

//*********************************    Lesson 114 Task_1
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

//*********************************    Lesson 114 task 2

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

//*********************************    Lesson 115

//    Ball def;
//    def.print();
//
//    Ball black("black");
//    black.print();
//
//    Ball thirty(30.0);
//    thirty.print();
//
//    Ball blackThirty("black", 30.0);
//    blackThirty.print();

//*********************************    Lesson 116
//    RGBA color(0, 135, 135);
//    color.print();

//*********************************    Lesson 117
//    Thing defl;
//    defl.print();
//
//    Thing red("red");
//    red.print();
//
//    Thing thirty(30.0);
//    thirty.print();
//
//    Thing redThirty("red", 30.0);
//    redThirty.print();

//*********************************    Lesson 126

//    Point3D p(3.0, 4.0, 5.0);
//    Vector3D v(3.0, 3.0, -2.0);
//
//    p.print();
//    p.moveByVector(v);
//    p.print();

//*********************************    result test task 1

//    Point first;
//    Point second(2.0, 5.0);
//    first.print();
//    second.print();
//    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
//    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

//*********************************    result test task 2

//    Welcome welcome;
//    welcome.print();

//*********************************    result test task 3

//    srand(static_cast<unsigned int>(time(0))); // используем системные часы в качестве стартового значения
//    Monster m = MonsterGenerator::generateMonster();
//    m.print();
//    Monster m1 = MonsterGenerator::generateMonster();
//    m1.print();

//*********************************    result test task 4

//    const Card cardQueenHearts(Card::RANK_QUEEN, Card::SUIT_HEART);
//    cardQueenHearts.printCard();
//    std::cout << " has the value " << cardQueenHearts.getCardValue() << '\n';

//    srand(static_cast<unsigned int>(time(0))); // используем системные часы в качестве стартового значения
//
//    Deck deck;
//    deck.printDeck();
//    deck.shuffleDeck();
//    deck.printDeck();
//
////    Deck deck;
////    deck.shuffleDeck();
//    Game::playBlackjack(deck);

//*********************************    lesson 131
//
//    Fraction f1(3, 4);
//    f1.print();
//
//    Fraction f2(2, 7);
//    f2.print();
//
//    Fraction f3 = f1 * f2;
//    f3.print();
//
//    Fraction f4 = f1 * 3;
//    f4.print();
//
//    Fraction f5 = 3 * f2;
//    f5.print();
//
//    Fraction f6 = Fraction(1, 2) *
//            Fraction(2, 3) * Fraction(3, 4);
//    f6.print();

//*********************************    lesson 133

//    Frection1 f1;
//    std::cout << "Enter fraction 1: ";
//    std::cin >> f1;
//
//    Frection1 f2;
//    std::cout << "Enter fraction 2: ";
//    std::cin >> f2;
//
//    std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';

//*********************************    lesson 135

//    Something something(2, 3 ,5);
//    cout << (-something).getA() << endl;
//    cout << (+something).getA() << endl;

//*********************************    lesson 136 task 1

//    Dollars ten(10);
//    Dollars seven(7);
//
//    if (ten > seven)
//        std::cout << "Ten dollars are greater than seven dollars.\n";
//    if (ten >= seven)
//        std::cout << "Ten dollars are greater than or equal to seven dollars.\n";
//    if (ten < seven)
//        std::cout << "Seven dollars are greater than ten dollars.\n";
//    if (ten <= seven)
//        std::cout << "Seven dollars are greater than or equal to ten dollars.\n";

//*********************************    lesson 136 task 2

//    std::vector<Car> v;
//    v.push_back(Car("Ford", "Mustang"));
//    v.push_back(Car("Renault", "Logan"));
//    v.push_back(Car("Ford", "Ranger"));
//    v.push_back(Car("Renault", "Duster"));
//
//    std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для класса Car
//
//    for (auto &car : v)
//        std::cout << car; // требуется перегрузка оператора << для класса Car

//***********************************    lesson 138 task 1

    GradeMap grades;
    grades["John"] = 'A';
    grades["Martin"] = 'B';
    std::cout << "John has a grade of " << grades["John"] << '\n';
    std::cout << "Martin has a grade of " << grades["Martin"] << '\n';

    return 0;
}
