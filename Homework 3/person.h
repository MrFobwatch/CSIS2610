/* 
 * File:   person.h
 * Author: kyacucci
 *
 * Created on March 22, 2017, 4:26 PM
 */

#ifndef PERSON_H
#define	PERSON_H

#include <iostream>

using namespace std;

class Person {
    
public:
    Person();
    void setID(int id);
    int getID();
    void setFirstName(string firstName);
    string getFirstName();
    void setLastName(string lastName);
    string getLastName();
    string getFullName();   
    
private:
    int id;
    string firstName, lastName;
};

#endif	/* PERSON_H */

