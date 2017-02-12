/* 
 * File:   main.cpp
 * Author: Kevin
 *
 * Created on February 8, 2017, 1:30 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Tic Tac Toe Game
 */
string board[9] = {"7","8","9","4","5","6","1","2","3"};
char x = 'X'; // Side 1
char o = 'O'; //Side 2
#define position7  board[0]
#define position8  board[1]
#define position9  board[2]
#define position4  board[3]
#define position5  board[4]
#define position6  board[5]
#define position1  board[6]
#define position2  board[7]
#define position3  board[8]

void displayBoard(){
    cout << "\r";
    cout << "\t TIC   TAC   TOE" << endl << endl;
    
    cout << "\t  " << position7 << "  |  " << position8 << "  |  " << position9 << "  " << endl;
    cout << "\t_____|_____|_____" << endl;
    cout << "\t     |     |     " << endl;
    cout << "\t  " << position4 << "  |  " << position5 << "  |  " << position6 << "  " << endl;
    cout << "\t_____|_____|_____" << endl;
    cout << "\t     |     |     " << endl;
    cout << "\t  " << position1 << "  |  " << position2 << "  |  " << position3 << "  " << endl;
}

void placeCharacter(int position, char marker){ //Given a location it places a character
    board[position] = marker;
}

void autoPlace(char marker){
    int positionGuess = rand()%9-1;
    if (board[positionGuess] == ( "1" , "2" , "3" , "4" , "5" , "6" , "7" , "8" , "9" )) {
        placeCharacter(positionGuess, marker);
    }
    else if (board[positionGuess] == "X" || board[positionGuess] == "O") {
        autoPlace(marker);
    }
}

int getPositionInput() {
    int position;
    cin >> position;
    return position;
}

void john(char marker) {
    int input = getPositionInput();
    if (input == 1) {
        placeCharacter(1, marker);
    }
    else if (input == 2) {
        placeCharacter(2, marker);
    }
    else if (input == 3) {
        placeCharacter(3, marker);
    }
    else if (input == 4) {
        placeCharacter(4, marker);
    }
    else if (input == 5) {
        placeCharacter(5, marker);
    }
    else if (input == 6) {
        placeCharacter(6, marker);
    }
    else if (input == 7) {
        placeCharacter(7, marker);
    }
    else if (input == 8) {
        placeCharacter(8, marker);
    }
    else if (input == 9) {
        placeCharacter(9, marker);
    } 
}
int main(int argc, char** argv) {
    displayBoard();
    //john();
    autoPlace(x);
    displayBoard();
    //john();
    autoPlace(x);
    displayBoard();
    //john();
    autoPlace(x);
    displayBoard();
    //john();
    autoPlace(x);
    displayBoard();
    
    return 0;
}

