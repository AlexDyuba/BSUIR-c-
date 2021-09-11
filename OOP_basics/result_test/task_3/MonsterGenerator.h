//
// Created by Alex on 9/11/21.
//

#ifndef C__BSUIR_MONSTERGENERATOR_H
#define C__BSUIR_MONSTERGENERATOR_H
#include "Monster.h"

class Monster;

static class MonsterGenerator {
public:
    static Monster generateMonster();

    static int getRandomNumber(int min, int max);

};


#endif //C__BSUIR_MONSTERGENERATOR_H
