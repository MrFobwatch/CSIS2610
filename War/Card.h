

/* 
 * File:   Card.h
 * Author: OWNER
 *
 * Created on April 10, 2017, 5:42 PM
 */

#ifndef CARD_H
#define CARD_H

class Card {
public:
    Card();
    Card(char suit, int number);
    void setNumber(int number);
    void setSuit(char suit);
    void setName();
    int getNumber();
    char getSuit();  
    char getName();
    
private:
    char suit;
    int number;
    char name;
};

#endif /* CARD_H */
