//
// Created by Alex on 9/12/21.
//

#include "Deck.h"
#include "Card.h"

Deck::Deck() {
    int i = 0;
    for (int suit = 0; suit < Card::MAX_SUITS; ++suit) {
        for (int rank = 0; rank < Card::MAX_RANKS; ++rank, ++i) {
            m_deck[i] = Card(static_cast<Card::CardRank>(rank), static_cast<Card::CardSuit>(suit));
        }
    }
}

void Deck::printDeck()
{
    for (const auto &card : m_deck)
    {
        card.printCard();
        std::cout << ' ';
    }

    std::cout << '\n';
}

int Deck::getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); // используем static, так как это значение нужно вычислить единожды
    // Равномерно распределяем вычисление значения из нашего диапазона
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void Deck::swapCard(Card &a, Card &b)
{
    Card temp = a;
    a = b;
    b = temp;
}

void Deck::shuffleDeck()
{
    // Перебираем каждую карту в колоде
    for (int index = 0; index < 52; ++index)
    {
        // Выбираем любую случайную карту
        int swapIndex = getRandomNumber(0, 51);
        // Меняем местами с нашей текущей картой
        swapCard(m_deck[index], m_deck[swapIndex]);
    }
    m_cardIndex = 0;
}

const Card & Deck::dealCard() {
    assert(m_cardIndex < 52);
    return m_deck[m_cardIndex++];
}

std::array<Card, 52> Deck::getDeck() {
    return m_deck;
}
