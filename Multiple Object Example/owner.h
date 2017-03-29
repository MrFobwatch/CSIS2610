/* 
 * File:   owner.h
 * Author: kyacucci
 *
 * Created on March 29, 2017, 6:06 PM
 */

#ifndef OWNER_H
#define	OWNER_H
#include <iostream>
#include "car.h"
#include "person.h"

using namespace std;

class Owner {

public:
    Owner();
    void setDriver(Person driver);
    Person getDriver();
    bool addCar(Car car);
    void outputDetails;
    int size;
    
private:
    Person driver;
    Car cars[5];
    
    int addIndex;
    int removeIndex;
};



#endif	/* OWNER_H */

