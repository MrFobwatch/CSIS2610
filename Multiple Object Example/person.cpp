/* 
 * File:   person.cpp
 * Author: kyacucci
 * 
 * Created on March 29, 2017, 4:42 PM
 */

#include "person.h"

Person::Person() {
}

void Person::setFirstName(string firstName) {
    this->firstName = firstName;
}

string Person::getFirstName() {
    return firstName;
}

void Person::setLastName(string lastName) {
    this->lastName = lastName;
}

string Person::getLastName() {
    return lastName;
}

string Person::getFullName() {
    return firstName + " " + lastName;
}

void Person::setAge(int age) {
    this->age = age;
}

int Person::getAge() {
    return age;
}

void Person::setDriverLicense(DriverLicense driverLicense) {
    this->driverLicense = driverLicense;
}

DriverLicense Person::getDriverLicense() {
    return driverLicense;
}

void Person::outputDetails() {
    cout << "Name: " << getFullName() << " (" << age << ")" << endl;
    cout << "Driver License Info" << endl;
    cout << "Number: " << driverLicense.getNumber() << " | "; 
    cout << "Valid for " << driverLicense.getValidYears() << " Years" << endl;
}