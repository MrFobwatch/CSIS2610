

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
        for(int num=2; num<15; num++) {
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
            mainDeck.addBottom(newCard);                            
        }
    }
}

void War::setField(Deck field) {
    this->field = field;
}

Deck War::getField() const {
    return field;
}

void War::separateMainDeck() {
    
}

void War::collectPlayerCards() {
    field.addTop(Player1.playCard());
    field.addBottom(Player2.playCard());
}

void War::returnWinnings(Player player) {
    for (int i=0; i < field.size(); i++) {
        player.addToBounty(field.removeTopCard());
    }
}

void War::displayField() {
        
}

Player War::roundWinner() {
    
}

void War::turn(){
    
}

