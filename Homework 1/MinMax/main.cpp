/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on January 25, 2017, 6:13 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * Determine the min and max of a set of user provided numbers
 */
int main(int argc, char** argv) {
    
    int a;
    int b;
    int c;
        
    cout << "Enter A, B, and C:\n";
    
    cin >> a >> b >> c;
    
    if((fmax(a,b) == a) && (fmax(a,c) == a))            //Check if A is the largest
    {
        cout << a << " is the largest number\n";
    }
    
    else if((fmax(b,a) == b) && (fmax(b,c) == b))       //Check if B is the largest)
    {
        cout << b << " is the largest number\n";
    }
    
    else if((fmax(c,a) == c) && (fmax(c,b) == c))       //Check if C is the largest)
    {
        cout << c << " is the largest number\n";
    }
    
    else
    {
        cout << "Error";
    }
    
    
    if((fmin(b,a) == a) && (fmin(c,a) == a))            //Check if A is the smallest)
    {
        cout << a << " is the smallest number";
    }
    
    else if((fmin(a,b) == b) && (fmin(c,b) == b))       //Check if B is the smallest)
    {
        cout << b << " is the smallest number";
    }
    
    else if((fmin(a,c) == c) && (fmin(b,c) == c))       //Check if C is the smallest)
    {
        cout << c << " is the smallest number";
    }
    
    else
    {
        cout << "Error";
    }
    return 0;
}

