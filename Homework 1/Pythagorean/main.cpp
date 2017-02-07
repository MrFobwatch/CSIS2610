/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on January 25, 2017, 5:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * Implementation of the Pythagorean Theorem into a calculator program
 */
int main(int argc, char** argv) {
    
    double a;
    double b;
    double c;
    int type;
    
    cout << "What are your two known variables in Pythagorean's Theorem?\n "
            "(Either 1 for ab ,2 for bc, or 3 for ca)\n";
    
    cin >> type;
       
    switch(type)
    {
        case 0:
            
           cout << "What is the value of a?\n";
           
           cin >> a;
           
           cout << "What is the value of b?\n";
           
           cin >> b;
           
           c = sqrt(pow(a,2) + pow(b,2));
           
           cout << "Side C is " << c << " units long";
           
           break;           
           
        case 1:
            
           cout << "What is the value of b?\n";
           
           cin >> b;
           
           cout << "What is the value of c?\n";
           
           cin >> c;
           
           a = sqrt(pow(c,2) - pow(b,2));
           
           cout << "Side A is " << a << "units long";
           
           break;
           
        case 2:
           
           cout << "What is the value of c?\n";
           
           cin >> c;
           
           cout << "What is the value of a?\n";
           
           cin >> a;
           
           b = sqrt(pow(c,2) - pow(a,2));
           
           cout << "Side B is " << b << "units long";
           
           break;
           
        default:
            
            cout << "You done screwed up\n";
    }    
            
    return 0;
}

