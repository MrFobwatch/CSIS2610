#include "instructor.h"

Instructor::Instructor() {
    
}

string Instructor::getFirstName() {
    return firstName;
}

string Instructor::getLastName() {
    return lastName;
}

string Instructor::getFullName() {
    return firstName + " " + lastName;
}

int Instructor::getId() {
    return id;
}

string Instructor::getEmail() {
    return email;
}

void Instructor::setFirstName(string firstName) {
    this->firstName = firstName;
}

void Instructor::setLastName(string lastName) {
    this->lastName = lastName;
}

void Instructor::setEmail(string email) {
    this->email = email;    
}

void Instructor::setId(int id) {
    this->id = id;
}