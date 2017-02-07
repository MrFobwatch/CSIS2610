/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on January 18, 2017, 5:40 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int number = 4;
/*
    if(number == 0)
    {
        cout << "Hello";
    }
    else if(number == 1)
    {
        cout << "World";
    }    
    else if(number == 2)
    {
        cout << "Two";        
    }
    else if(number == 3)
    {
        cout << "Three";
    }
    else if(number == 4)
    {
        cout << "Four";
    }
    else if(number == 5)
    {
        cout << "Five";
    }
    else
    {
        cout << "Number not found";
    }
 */
    
/*    switch(number)
    {
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
       default:
            cout<< "Error";
    {
*/   
    number /= 2;
    
    cout << number;
    
    return 0;
}

