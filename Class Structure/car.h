/* 
 * File:   Car.h
 * Author: kyacucci
 *
 * Created on March 20, 2017, 4:57 PM
 */

#ifndef CAR_H
#define	CAR_H

#include <iostream>
using namespace std;

class Car {
    
public:
    Car();
    void setMake(string make);
    string getMake();
    void setModel(string color);
    string getModel();
    void setColor(string color);
    string getColor();
    void setYear(int year);
    int getYear();
    
private:    
    string make;
    string model;
    string color;
    int year;
};

#endif	/* CAR_H */

