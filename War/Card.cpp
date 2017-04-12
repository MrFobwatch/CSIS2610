
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
    int num = getNumber();
    if(number >= 11){
        if(number == 11){
            this->name=('J');
        }
        if(number==12){
            this->name=('Q');
        }
        if(number==13){
            this->name=('K');
        }
        if(number==14){
            this->name=('A');
        }
    }
    else {
        this->name = static_cast<char>(number);
    }   
}