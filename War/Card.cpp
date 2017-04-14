
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
//    int num = getNumber();
    if(number >= 11){
        if(number == 11){
            name=('J');
        }
        if(number==12){
            name=('Q');
        }
        if(number==13){
            name=('K');
        }
        if(number==14){
            name=('A');
        }
    }
    else {
        name = number;
    }   
}

char Card::getName(){
    return name;
}