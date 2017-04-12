
/* 
 * File:   Player.cpp
 * Author: OWNER
 * 
 * Created on April 10, 2017, 6:22 PM
 */

#include "Player.h"

Player::Player() {
    
}

void Player::setBounty(Deck bounty) {
    this->bounty = bounty;
}

Deck Player::getBounty(){
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

//void Player::collectWinnings(Deck field) {
//    for (int i=0; i < field.size(); i++) {
//        bounty.appendCard(field.front());
//    }
//}

void Player::fillDraw(Deck fill) {
    draw.swap(fill);
}