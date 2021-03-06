
/* 
 * File:   Player.h
 * Author: OWNER
 *
 * Created on April 10, 2017, 6:22 PM
 */

#include "Deck.h"
#include <iostream>
#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
    Player();
    Deck getHand() const;
    void setHand();
    Deck getBounty() const;
    void setDraw(Deck draw);
    Deck getDraw() const;
    Card playCard();
    void addToBounty(Card card);
    void refillDraw();
    void emptyBounty();
    
private:
    Deck draw;
    Deck bounty;
    Deck hand;
    
};

#endif /* PLAYER_H */

