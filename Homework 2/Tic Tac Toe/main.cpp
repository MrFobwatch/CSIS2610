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
string board[3][3] = {{"X","X","X"},{"X","X","X"},{"X","X","X"}};
//Game board is stored without any labels or lines

void displayBoard(){
    for(int x=0; x<3; x++) {
        for(int y=0; y<3; y++) {
            cout << board[x][y] << "\t";
        }
        cout << endl;
    }
}

void placeCharacter(int x, int y,int side){ //Given a coordinate it places a character
    board[x][y];
    
}

void comPlayer(){
    
}
int main(int argc, char** argv) {
    char player = 'X'; // Side 1
    char computer = 'O'; //Side 2
    displayBoard();
    
    

    return 0;
}

