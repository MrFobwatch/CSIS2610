

/* 
 * File:   War.cpp
 * Author: OWNER
 * 
 * Created on April 10, 2017, 5:33 PM
 */

#include "War.h"

War::War() {
    srand(time(NULL));
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
    for (int i=0; i<26; i++) {
        Player1Deck.addTopCard(mainDeck.removeTopCard());
        Player2Deck.addTopCard(mainDeck.removeTopCard());                
    }
    Player1.setDraw(Player1Deck);
    Player2.setDraw(Player2Deck);
}

void War::collectPlayerCards() {
    std::cout << "Press Enter to take your turn \n";
//    std::cin.ignore();
    field.addTopCard(Player1.playCard());
    field.addBottomCard(Player2.playCard());
}

void War::returnWinnings() {
    int winner;
    winner = roundWinner();
    int size = field.size();
    for (int i=0; i < size; i++) {
        if(winner == 1) {
            Player1.addToBounty(field.removeTopCard());
        }
        else if(winner == 2) {
            Player2.addToBounty(field.removeTopCard());
        };
    }
    field.clear();
}

void War::displayField() {
    std::cout << "Player One Card" << "\t" << "\t Player Two Card" << std::endl;
    std::cout << "\t";
    field.printTopCard();
    std::cout << "\t \t \t ";
    field.printBottomCard();
    std::cout << std::endl;
}

int War::roundWinner() {
    int winnerOfRound;
    Card card1 = field.getTopCard();
    Card card2 = field.getBottomCard();
    if (card1.getNumber() == card2.getNumber()) {
        std::cout << "\t \t WAR!" << std::endl;
        collectPlayerCards();
        collectPlayerCards();
        displayField();
        winnerOfRound = roundWinner();
    }
    else if(card1.getNumber() > card2.getNumber()) {
        std::cout << "\t     Player 1 Wins" << std::endl;
        winnerOfRound = 1;
    }
    else if(card1.getNumber() < card2.getNumber()) {
        std::cout << "\t     Player 2 Wins" << std::endl;
        winnerOfRound = 2;
    }
    return winnerOfRound;
}

bool War::checkWon() {
    bool isWinner = false;
    if (((Player1.getDraw().size() == 0 )&& (Player1.getBounty().size()) == 0)) {
        isWinner = true;
        std::cout << "Player 2 has all the cards and is the Winner!" << std::endl;
    }
    else if (((Player1.getDraw().size() == 0) && (Player1.getBounty().size()) == 0))  {
        isWinner = true;
        std::cout << "Player 1 has all the cards and is the Winner!" << std::endl;
    }
    return isWinner;
}

void War::turn(){
    collectPlayerCards();
    displayField();
    returnWinnings();
    std::cout << "Deck Size = " << Player1.getDraw().size();
    std::cout << "\t \t Deck Size = " << Player2.getDraw().size() << std::endl;
    std::cout << "Bounty Size = " << Player1.getBounty().size();
    std::cout << "\t \tBounty Size = " << Player2.getBounty().size() << "\n \n \n" << std::endl;
}

void War::start(){
    createMainDeck();
    separateMainDeck();
    turn();
    while(checkWon() == false){
        turn();
    }
}

