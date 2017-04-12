

/* 
 * File:   Deck.cpp
 * Author: OWNER
 * 
 * Created on April 10, 2017, 5:42 PM
 */

#include "Deck.h"

Deck::Deck() {
}

void Deck::setDeckCards(std::deque<Card> deckCards) {
    this->deckCards = deckCards;
}

std::deque<Card> Deck::getDeckCards() const {
    return deckCards;
}

void Deck::shuffleDeck() {
    std::random_shuffle(deckCards.begin(), deckCards.end());
}

Card Deck::removeTopCard() {
    Card topCard = deckCards.front();
    deckCards.pop_front();
    return topCard;
}

Card Deck::removeBottomCard() {
    Card bottomCard = deckCards.back();
    deckCards.pop_back();
    return bottomCard;
}

Card Deck::top() {
    return deckCards.front();
}

Card Deck::bottom() {
    return deckCards.back();
}

void Deck::clear() {
    deckCards.clear();
}

int Deck::size() {
    deckCards.size();
}
