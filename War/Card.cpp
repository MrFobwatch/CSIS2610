
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

char Card::getSuit(){
    return suit;
}

void Card::setName(){
    if(number >= 10){
        if(number == 10) {
            name=('T');
        }
        else if(number == 11){
            name=('J');
        }
        else if(number==12){
            name=('Q');
        }
        else if(number==13){
            name=('K');
        }
        else if(number==14){
            name=('A');
        }
    }
    else {
        name = number + 48;
    }   
}

char Card::getName(){
    return name;
}