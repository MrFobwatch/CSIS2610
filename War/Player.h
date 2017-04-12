
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
    void setBounty(Deck bounty);
    Deck getBounty() const;
    void setDraw(Deck draw);
    Deck getDraw() const;
    Card playCard();
//    void collectWinnings(Deck field);
    void fillDraw(Deck fill);
    void emptyBounty();
    
private:
    Deck draw;
    Deck bounty;
    
};

#endif /* PLAYER_H */

