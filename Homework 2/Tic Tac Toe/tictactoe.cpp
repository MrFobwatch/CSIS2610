#include "tictactoe.h"
#define position7  board[0]
#define position8  board[1]
#define position9  board[2]
#define position4  board[3]
#define position5  board[4]
#define position6  board[5]
#define position1  board[6]
#define position2  board[7]
#define position3  board[8]

TicTacToe::TicTacToe() {
    position7 = '7';
    position8 = '8';
    position9 = '9';
    position4 = '4';
    position5 = '5';
    position6 = '6';
    position1 = '1';
    position2 = '2';
    position3 = '3';
    
    playerOneWin = false;
    playerTwoWin = false;
    turnCounter = 0;
    marker = 'X';
}

void TicTacToe::displayBoard() {
    cout << endl << "\t TIC   TAC   TOE" << endl << endl;
    
    cout << "\t  " << position7 << "  |  " << position8 << "  |  " << position9 << "  " << endl;
    cout << "\t_____|_____|_____" << endl;
    cout << "\t     |     |     " << endl;
    cout << "\t  " << position4 << "  |  " << position5 << "  |  " << position6 << "  " << endl;
    cout << "\t_____|_____|_____" << endl;
    cout << "\t     |     |     " << endl;
    cout << "\t  " << position1 << "  |  " << position2 << "  |  " << position3 << "  " << endl;
}

void TicTacToe::clearBoard() {
    for (int i=0; i< 9; i++) {
        board[i]= '-';
    }
//    board[0]= '7';
//    board= 
//    //{'7','8','9','4','5','6','1','2','3'};
    
    playerOneWin = false;
    playerTwoWin = false;
    marker = 'X';
    
}

void TicTacToe::userInput() {
    int position;
    cin >> position;
    if (position == 1) {
        position1 = marker;
    }
    else if (position == 2) {
        position2 = marker;
    }
    else if (position == 3) {
        position3 = marker;
    }
    else if (position == 4) {
        position4 = marker;
    }
    else if (position == 5) {
        position5 = marker;
    }
    else if (position == 6) {
        position6 = marker;
    }
    else if (position == 7) {
        position7 = marker;
    }
    else if (position == 8) {
        position8 = marker;
    }
    else if (position == 9) {
        position9 = marker;
    }
    
}

void TicTacToe::swapMarker() {
    if (turnCounter % 2 == 1) {
        marker = 'O';
    }
    else {
        marker = 'X';
    } 
}

void TicTacToe::checkEnd() {
    displayBoard();
    while(end == false) {
        userInput();
        displayBoard();
        checkWin();
        swapMarker();
    }
    outputResult();
}

void TicTacToe::checkWin() {
    turnCounter++;
    
    if(turnCounter >= 5) {
        if(((position1 == position2) & (position2 == position3)) ||
                ((position4 == position5) & (position5 == position6)) ||
                ((position7 == position8) & (position8 == position9)) ||
                ((position1 == position4) & (position4 == position7)) ||
                ((position2 == position5) & (position5 == position8)) ||
                ((position3 == position6) & (position6 == position9)) ||
                ((position1 == position5) & (position5 == position9)) ||
                ((position3 == position5) & (position5 == position7))) {
            if(marker == 'X') {
                playerOneWin = true;
                end = true;
            }
            else if(marker == 'O') {
                playerTwoWin = true;
                end = true;
            }
        } 
    }
    if(turnCounter == 9 && playerOneWin == false && playerTwoWin == false) {
        end = true;
    }
    
}

void TicTacToe::outputResult() {
    if(playerOneWin == true) {
        cout << "Player ONE is the WINNER!!!!" << endl;
    }
    else if (playerTwoWin == true) {
        cout << "Player TWO is the WINNER!!!!" << endl;
    }
    else {
        cout << "NO WINNER! :'(" << endl;
    }
}