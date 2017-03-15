/* 
 * File:   instructor.h
 * Author: kyacucci
 *
 * Created on March 15, 2017, 5:14 PM
 */

#ifndef INSTRUCTOR_H
#define	INSTRUCTOR_H

#include <iostream>

using namespace std;

class Instructor {
    
public:
    Instructor();
    string getFirstName();
    string getLastName();
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    string getEmail();
    string getFullName();
    int getId();
    void setId(int id);    
    
private:
    int id;
    string firstName;
    string lastName;
    string email;
};



#endif	/* INSTRUCTOR_H */

