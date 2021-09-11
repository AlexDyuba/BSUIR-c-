//
// Created by Alex on 9/11/21.
//

#include "MonsterGenerator.h"

Monster MonsterGenerator::generateMonster() {
    Monster::MonsterType monsterType = static_cast<Monster::MonsterType>
            (getRandomNumber(0, Monster::MAX_MONSTER_TYPES - 1));
    int health = getRandomNumber(1, 100);
    static std::string names[6]{  "John", "Brad", "Alex", "Thor", "Hulk", "Asnee" };
    return Monster(monsterType, names[getRandomNumber(0, 5)], health);
}

int MonsterGenerator::getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
