

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
    void setNumber(int number);
    void setSuit(char suit);
    int getNumber();
    char getSuit();    
private:
    char suit;
    int number;
};

#endif /* CARD_H */
