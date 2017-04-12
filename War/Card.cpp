
/* 
 * File:   Card.cpp
 * Author: OWNER
 * 
 * Created on April 10, 2017, 5:42 PM
 */

#include "Card.h"

Card::Card() {
}

void Card::setNumber(int number){
    this->number= number;
}

void Card::setSuit(char suit){
    this->suit= suit;
}

int Card::getNumber(){
    return number;
}

int Card::getSuit(){
    return suit;
}