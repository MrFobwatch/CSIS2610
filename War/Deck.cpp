

/* 
 * File:   Deck.cpp
 * Author: OWNER
 * 
 * Created on April 10, 2017, 5:42 PM
 */

#include "Deck.h"

Deck::Deck() {
}

void Deck::shuffleDeck() {
    std::random_shuffle(deckCards.begin(), deckCards.end());
}

void Deck::appendCard(Card card) {
    deckCards.push_back(card);
}

Card Deck::removeCard() {
    Card topCard = deckCards.front();
    deckCards.pop_front();
    return topCard;
}