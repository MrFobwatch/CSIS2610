/* 
 * File:   person.h
 * Author: kyacucci
 *
 * Created on March 29, 2017, 4:42 PM
 */

#ifndef PERSON_H
#define	PERSON_H

#include <iostream>
#include "driverLicense.h"

using namespace std;

class Person {

public:
    Person();
    void setFirstName(string firstName);
    string getFirstName();
    void setLastName(string lastName);
    string getLastName();
    string getFullName();
    void setAge(int age);
    int getAge();
    void setDriverLicense(DriverLicense driverLicense);
    DriverLicense getDriverLicense();
    
private:
    string firstName;
    string lastName;
    int age;
    DriverLicense driverLicense;

};

#endif	/* PERSON_H */

