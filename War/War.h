
/* 
 * File:   War.h
 * Author: OWNER
 *
 * Created on April 10, 2017, 5:33 PM
 */

#ifndef WAR_H
#define WAR_H
#include "Deck.h"
#include "Player.h"

class War {
public:
    War();
    void createDeck();
    void separateDeck();
    void displayRound();
    Card draw();
    
private:
    Player Player1;
    Player Player2;

};

#endif /* WAR_H */

