
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
    
private:
    Deck draw;
    Deck bounty = Deck();
    
};

#endif /* PLAYER_H */

