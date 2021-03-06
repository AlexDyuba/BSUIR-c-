//
// Created by Alex on 9/12/21.
//

#ifndef C__BSUIR_CARD_H
#define C__BSUIR_CARD_H


class Card {
public:
    enum CardSuit
    {
        SUIT_CLUB,
        SUIT_DIAMOND,
        SUIT_HEART,
        SUIT_SPADE,
        MAX_SUITS
    };

    enum CardRank
    {
        RANK_2,
        RANK_3,
        RANK_4,
        RANK_5,
        RANK_6,
        RANK_7,
        RANK_8,
        RANK_9,
        RANK_10,
        RANK_JACK,
        RANK_QUEEN,
        RANK_KING,
        RANK_ACE,
        MAX_RANKS
    };

    Card(CardRank = Card::MAX_RANKS, CardSuit = Card::MAX_SUITS);

    void printCard() const;

    int getCardValue() const;

private:
    CardRank m_rank;
    CardSuit m_suit;
};


#endif //C__BSUIR_CARD_H
