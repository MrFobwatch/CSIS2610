

/* 
 * File:   Deck.h
 * Author: OWNER
 *
 * Created on April 10, 2017, 5:42 PM
 */

#ifndef DECK_H
#define DECK_H
#include <deque>
#include <algorithm>
#include "Card.h"

class Deck {
    
public:
    Deck();
    void setDeckCards(std::deque<Card> deckCards);
    std::deque<Card> getDeckCards() const;
//    ~Deck();
    void shuffleDeck();
    Card removeTopCard();
    void appendCard(Card card);
//    Card front();
//    Card back();
//    void push_back(Card card);
//    void push_front(Card card);
//    void pop_back();
//    void pop_front();
//    void clear();
    int size();
    
private:
//    int size;
    std::deque<Card> deckCards;
};

#endif /* DECK_H */

