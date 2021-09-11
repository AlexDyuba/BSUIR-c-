//
// Created by Alex on 9/11/21.
//

#include "Monster.h"
#include <iostream>
Monster::Monster(MonsterType monsterType, std::string name, int health) :
m_type{monsterType},
m_name{name},
m_health{health}
{
}

std::string Monster::getTypeString() {
    switch (m_type) {
        case Dragon: return "dragon";
        case Goblin: return "goblin";
        case Ogre: return "ogre";
        case Orc: return "orc";
        case Skeleton: return "skeleton";
        case Troll: return "troll";
        case Vampire: return "vampire";
        case Zombie: return "zombie";

    }
    return "error";
}

void Monster::print() {
    std::cout << m_name << " is the " << getTypeString()
    << " that has " << m_health << " health points." << std::endl;
}


