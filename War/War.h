
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
    void setField(Deck field);
    Deck getField() const;    
    void separateMainDeck();
    void collectPlayerCards();
    void returnWinnings();
    void displayField();
    Player roundWinner();
    bool checkWon();
    void turn();
    void start();

    
    
private:
    Player Player1;
    Player Player2;
    Deck mainDeck;
    Deck field;

};

#endif /* WAR_H */

