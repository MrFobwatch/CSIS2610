

/* 
 * File:   Deck.h
 * Author: OWNER
 *
 * Created on April 10, 2017, 5:42 PM
 */

#ifndef DECK_H
#define DECK_H
#include"Card.h"

class Deck {
public:
    Deck(int size);
    
    
private:
    int size;
    Card deck[52];
};

#endif /* DECK_H */

