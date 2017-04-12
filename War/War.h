
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
    void createMainDeck();
    void separateMainDeck();
    void displayField();
    void turn();
    Player roundWinner();
    
    
    
private:
    Player Player1;
    Player Player2;
    Deck mainDeck;
    Deck field;

};

#endif /* WAR_H */

