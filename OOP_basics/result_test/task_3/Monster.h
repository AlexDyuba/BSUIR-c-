//
// Created by Alex on 9/11/21.
//

#ifndef C__BSUIR_MONSTER_H
#define C__BSUIR_MONSTER_H
#include <iostream>


class Monster {
public:
    enum MonsterType{
        Dragon,
        Goblin,
        Ogre,
        Orc,
        Skeleton,
        Troll,
        Vampire,
        Zombie,
        MAX_MONSTER_TYPES
    };

    Monster(MonsterType, std::string, int);

    std::string getTypeString();

    void print();
private:
    MonsterType m_type;
    std::string m_name;
    int m_health;
};


#endif //C__BSUIR_MONSTER_H
