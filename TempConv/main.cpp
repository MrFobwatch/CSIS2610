/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on January 25, 2017, 5:19 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 *This program takes a temperature given in Fahrenheit and outputs it in Celsius
 */
int main(int argc, char** argv) {

    int ftemp;
    double ctemp;
    cout << "Enter a temperature in Fahrenheit: ";
            
    cin >> ftemp;
    
    ctemp = ((ftemp-32)*5)/9;
    
    cout << ctemp << " degrees Celsius" << endl;
    return 0;
}

