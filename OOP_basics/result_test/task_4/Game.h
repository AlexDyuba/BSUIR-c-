//
// Created by Alex on 9/12/21.
//

#ifndef C__BSUIR_GAME_H
#define C__BSUIR_GAME_H
#include <iostream>
#include "Card.h"
#include "Deck.h"

class Deck;
class Card;

static class Game {
public:
    static char getPlayerChoice();
    static bool playBlackjack(Deck deck);
};


#endif //C__BSUIR_GAME_H
