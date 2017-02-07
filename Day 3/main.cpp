/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on January 30, 2017, 5:50 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    bool value = true;
    int count = 0;
    int numbers[10];
    int numbs[5][5];
    
//    while(value) {
//        cout << "Hello World" << endl;
//        if(count == 10){
//            value = false;
//        }
//        count++;
//        cout << "Count is: " << count << endl;       
//    }
//    for(int count = 1; count < 3; count++){
//        cout << "Count is: " << count << endl;
//    }
//    return 0;
    
//    for(int index = 1; index < 10; index++){
//        numbers[index] = 2 + 2 * index;
//        cout << numbers[index] << ',';
//    }
//    
//    for(int index = 1; index < 10; index++){
//        cout << index << ',';
//    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            numbs[i][j] = 1;
            cout << numbs[i][j] << " ";
        }
    }
}

