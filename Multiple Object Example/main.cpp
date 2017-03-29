/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on March 29, 2017, 4:41 PM
 */

#include <cstdlib>
#include <iostream>

#include "person.h"
#include "owner.h"

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
    Owner owner;
    
    for(int i=1; i<owner.size; i++) {
        Car cars;
        
        string make;
        cout << "Enter Make: "; 
        cin >> make;
        cars.setMake(make);

        string model;
        cout << "Enter Model: ";
        cin >> model;
        cars.setModel(model);
        
        int year;
        cout << "Enter Year: ";
        cin >> year;
        cars.setYear(year);
        owner.addCar(cars);
    }
    owner.outputDetails();
    return 0;
}

