
/* 
 * File:   Player.h
 * Author: OWNER
 *
 * Created on April 10, 2017, 6:22 PM
 */

#include "Deck.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
    Player();
    Card playCard();
    void collectWinnings(Deck field);
    void refillDraw();
    
private:
    Deck draw;
    Deck bounty;
    
};

#endif /* PLAYER_H */

