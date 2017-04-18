

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
#include <iostream>
#include <ctime>
#include "Card.h"

class Deck {
    
public:
    Deck();
    void setDeckCards(std::deque<Card> deckCards);
    std::deque<Card> getDeckCards() const;
    void shuffleDeck();
    Card removeTopCard();
    Card removeBottomCard();
    Card getTopCard();
    Card getBottomCard();
    void addBottomCard(Card card);
    void addTopCard(Card card);
    void clear();
    int size();
    void printTopCard();
    void printBottomCard();
    
private:
    std::deque<Card> deckCards;
};

#endif /* DECK_H */

