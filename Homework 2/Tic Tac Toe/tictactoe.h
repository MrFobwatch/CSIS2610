/* 
 * File:   tictactoe.h
 * Author: kyacucci
 *
 * Created on April 5, 2017, 4:32 PM
 */

#ifndef TICTACTOE_H
#define	TICTACTOE_H

#include <cstdlib>
#include <iostream>
using namespace std;

class TicTacToe {

private:
    int turnCounter;
    char marker;
    char board[9];
    bool playerOneWin;
    bool playerTwoWin;
    bool end;
    
public:
    TicTacToe();
    void displayBoard();
    void clearBoard();
    void userInput();
    void swapMarker();
    void checkEnd();
    void checkWin();
    void outputResult();
    
    
};




#endif	/* TICTACTOE_H */

