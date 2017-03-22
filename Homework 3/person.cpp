#include "person.h"

Person::Person() {
    
}

void Person::setID(int id) {
    this->id = id;
}

int Person::getID() {
    return id;
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