

/* 
 * File:   War.cpp
 * Author: OWNER
 * 
 * Created on April 10, 2017, 5:33 PM
 */

#include "War.h"

War::War() {
    
}

void War::createMainDeck() {
    for (int suit=0; suit<4; suit++) {
        for(int num=1; num<14; num++) {
            Card newCard;
            newCard.setNumber(num);
            switch (suit) {
                case 0: //Set Spades
                    newCard.setSuit('S');
                    break;
                case 1: //Set Hearts
                    newCard.setSuit('H');
                    break;
                case 2: //Set Clubs
                    newCard.setSuit('C');
                    break;
                case 3: //Set Diamonds
                    newCard.setSuit('D');
                    break;                
            }
            mainDeck.appendCard(newCard);                            
        }
    }
}

void War::separateMainDeck() {
    
}

void War::collectPlayerCards() {
    field.push_front(Player1.playCard());
    field.push_back(Player2.playCard());
}

void War::collectWinnings(Player player) {
    for (int i=0; i < field.size(); i++) {
        player->bounty.appendCard(field.front());
    }
}
void War::displayField() {
        
}

Player War::roundWinner() {
    
}

void War::turn(){
    
}

