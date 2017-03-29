/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on March 29, 2017, 4:41 PM
 */

#include <cstdlib>
#include <iostream>

#include "person.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Person person;
    person.setFirstName("Kevin");
    person.setLastName("Yacucci");
    person.setAge(18);
    
    DriverLicense driverLicense;
    driverLicense.setNumber("OH654321");
    driverLicense.setValidYears(4);
    
    person.setDriverLicense(driverLicense);
    return 0;
}

