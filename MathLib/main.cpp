/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on January 23, 2017, 5:29 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    int a = 10;
    int b = 2;
    double total = pow(b,a);
    
    double box[5] = {00, 01, 11 ,100, 101};
    cin >> box[0];
    cout << box[0];
    
    //cout << floor(box[4] / box[2]);
    
    // cout << total;
    // cout << sqrt(a % b) << endl;
    
    
    
    return 0;
}

