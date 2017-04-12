

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

//void Deck::push_back(Card card) {
//    deckCards.push_back(card);

Card Deck::removeTopCard() {
    Card topCard = deckCards.front();
    deckCards.pop_front();
    return topCard;
}

int Deck::size() {
    deckCards.size();
}