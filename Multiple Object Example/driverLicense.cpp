
/* 
 * File:   driverlicense.cpp
 * Author: kyacucci
 * 
 * Created on March 29, 2017, 5:06 PM
 */

#include "driverLicense.h"

DriverLicense::DriverLicense() {
    
}

void DriverLicense::setNumber(string number) {
    this->number = number;
}

string DriverLicense::getNumber() {
    return number;
}

void DriverLicense::setValidYears(int validYears) {
    this->validYears = validYears;
}

int DriverLicense::getValidYears() {
    return validYears;
}