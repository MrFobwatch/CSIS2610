
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
    if (draw.size() > 0) {
      return draw.removeTopCard();  
    }
    else {
        refillDraw();
        std::cout << "Your cards are being refilled." << std::endl;
    }
}

void Player::addToBounty(Card card) {
    bounty.addTopCard(card);
}

void Player::refillDraw() {
    draw.setDeckCards(bounty.getDeckCards());
    bounty.clear();
    draw.shuffleDeck();
}