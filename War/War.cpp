

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
            newCard.setName();
            mainDeck.addBottomCard(newCard);                            
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
    mainDeck.shuffleDeck();
    Deck Player1Deck;
    Deck Player2Deck;
    for (int i=0; i<(mainDeck.size()/2); i++) {
        Player1Deck.addTopCard(mainDeck.removeTopCard());
        Player2Deck.addTopCard(mainDeck.removeTopCard());                
    }
    Player1.setDraw(Player1Deck);
    Player2.setDraw(Player2Deck);
}

void War::collectPlayerCards() {
    field.addTopCard(Player1.playCard());
    field.addBottomCard(Player2.playCard());
}

void War::returnWinnings() {
    Player winner;
    winner = roundWinner();
    for (int i=0; i < field.size(); i++) {
        winner.addToBounty(field.removeTopCard());
    }
    field.clear();
}

void War::displayField() {
    std::cout << "\t Player One Card" << "\t" << "\t Player Two Card" << std::endl;
    std::cout << "\t";
    field.printTopCard();
    std::cout << "\t \t \t";
    field.printBottomCard();
    std::cout << std::endl;
}

Player War::roundWinner() {
    Player roundWinner;
    Card card1 = field.getTopCard();
    Card card2 = field.getBottomCard();
    if (card1.getNumber() == card2.getNumber()) {
        collectPlayerCards();
        collectPlayerCards();
        void roundWinner();
    }
    else if(card1.getNumber() > card2.getNumber()) {
        roundWinner = Player1;
    }
    else if(card1.getNumber() < card2.getNumber()) {
        roundWinner = Player2;
    }
    return roundWinner;
}

bool War::checkWon() {
    return true;
}
void War::turn(){
    collectPlayerCards();
    displayField();
    returnWinnings();
    std::cout << "\t Deck Size = " << Player1.getDraw().size();
    std::cout << "\t \t Deck Size = " << Player2.getDraw().size() << std::endl;
}

void War::start(){
    createMainDeck();
    separateMainDeck();
//    bool condition = true;
//    while(condition == true){
    turn();
    for(int i=0; i< 15; i++) {
        displayField();
        turn();
    }
//        if(checkWon()) {
//            condition = false;
//        }
//    }
}

