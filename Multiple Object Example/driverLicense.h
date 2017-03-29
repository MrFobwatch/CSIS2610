/* 
 * File:   driverlicense.h
 * Author: kyacucci
 *
 * Created on March 29, 2017, 5:03 PM
 */

#ifndef DRIVERLICENSE_H
#define	DRIVERLICENSE_H

#include <iostream>

using namespace std;

class DriverLicense {
    
public:
    DriverLicense();
    void setNumber(string number);
    string getNumber();
    void setValidYears(int validYears);
    int getValidYears();

private:
    string number;
    int validYears;
    
};


#endif	/* DRIVERLICENSE_H */

