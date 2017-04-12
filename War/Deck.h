

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
    void shuffleDeck();
    Card removeCard();
    void appendCard(Card card);
    
private:
    int size;
    std::deque<Card> deckCards;
};

#endif /* DECK_H */

