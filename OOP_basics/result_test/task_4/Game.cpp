//
// Created by Alex on 9/12/21.
//

#include "Game.h"
#include <iostream>
#include "Deck.h"
#include "Card.h"
using namespace std;

char Game::getPlayerChoice()
{
    std::cout << "(h) to hit, or (s) to stand: ";
    char choice;
    do
    {
        std::cin >> choice;
    } while (choice != 'h' && choice != 's');

    return choice;
}

bool Game::playBlackjack(Deck mainDeak)
{
    std::array<Card, 52> deck = mainDeak.getDeck();
    const Card *cardPtr = &deck[0];

    int playerTotal = 0;
    int dealerTotal = 0;

    // Дилер получает одну карту
    dealerTotal += cardPtr->getCardValue();
    cardPtr++;
    std::cout << "The dealer is showing: " << dealerTotal << '\n';

    // Игрок получает две карты
    playerTotal += cardPtr->getCardValue();
    cardPtr++;
    playerTotal += cardPtr->getCardValue();
    cardPtr++;

    // Игрок начинает
    while (1)
    {
        std::cout << "You have: " << playerTotal << '\n';
        char choice = getPlayerChoice();
        if (choice == 's')
            break;

        playerTotal += cardPtr->getCardValue();
        cardPtr++;

        // Смотрим, не проиграл ли игрок
        if (playerTotal > 21)
            return false;
    }

    // Если игрок не проиграл (у него не больше 21 очка), тогда дилер получает карты до тех пор, пока у него в сумме будет не меньше 17 очков
    while (dealerTotal < 17)
    {
        dealerTotal += cardPtr->getCardValue();
        cardPtr++;
        std::cout << "The dealer now has: " << dealerTotal << '\n';
    }

    // Если у дилера больше 21, то он проиграл, а игрок выиграл
    if (dealerTotal > 21)
        return true;

    return (playerTotal > dealerTotal);
}