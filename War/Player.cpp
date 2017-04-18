
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

Deck Player::getHand() const {
    return hand;
}

void Player::setHand() {
    
}
Card Player::playCard() {
    Card playedCard;
    if (draw.size() > 0) {
      playedCard = draw.removeTopCard();
    }
    else if((draw.size() == 0) &&( bounty.size() != 0)) {
        std::cout << "Your cards are being refilled." << std::endl;
        refillDraw();
        playedCard = playCard();
    }
    return playedCard;
}

void Player::addToBounty(Card card) {
    bounty.addTopCard(card);
}

void Player::refillDraw() {
    if (getBounty().size() > 0) {
        draw.setDeckCards(bounty.getDeckCards());
        bounty.clear();
        draw.shuffleDeck();
    }
}