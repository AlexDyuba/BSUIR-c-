//
// Created by Alex on 9/12/21.
//

#ifndef C__BSUIR_DECK_H
#define C__BSUIR_DECK_H
#include <iostream>
#include <array>
#include "Card.h"

class Card;

class Deck {
public:
    Deck();
    void printDeck();
    void shuffleDeck();
    const Card& dealCard();
    std::array<Card, 52> getDeck();

private:
    int m_cardIndex = 0;
    std::array<Card, 52> m_deck;
    static int getRandomNumber(int min, int max);
    static void swapCard(Card &a, Card &b);
};


#endif //C__BSUIR_DECK_H
