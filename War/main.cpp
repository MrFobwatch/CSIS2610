
/* 
 * File:   main.cpp
 * Author: OWNER
 *
 * Created on April 10, 2017, 5:26 PM
 */

#include <cstdlib>

#include "War.h"

using namespace std;

int main() {
    War war;
//    war.start();
    war.createMainDeck();
    war.separateMainDeck();
    war.collectPlayerCards();
    war.displayField();
    war.turn();
    war.displayField();
    war.turn();
    return 0;
}

