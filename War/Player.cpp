
/* 
 * File:   Player.cpp
 * Author: OWNER
 * 
 * Created on April 10, 2017, 6:22 PM
 */

#include "Player.h"

Player::Player() {
    
}


Deck Player::getBounty() const {
    return bounty;
}

void Player::setDraw(Deck draw) {
    this->draw = draw;
}

Deck Player::getDraw() const {
    return draw;
}

Card Player::playCard() {
   return draw.removeTopCard();
}

void Player::addToBounty(Card card) {
    bounty.addTop(card);
}

void Player::refillDraw(Deck fill) {
    draw.setDeckCards(bounty.getDeckCards());
    bounty.clear();
    draw.shuffleDeck();
}