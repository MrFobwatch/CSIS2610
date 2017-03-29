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

void setDriverLicense(DriverLicense driverLicense) {
    this->driverLicense = driverLicense;
}

DriverLicense getDriverLicense() {
    return driverLicense;
}