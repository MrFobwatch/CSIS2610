/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on March 15, 2017, 5:13 PM
 */

#include <cstdlib>
#include <iostream>
#include "instructor.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int number = 0;
    
    Instructor instructor;
    instructor.setFirstName("Jough");
    instructor.setLastName("Psymthe");
    cout << "Full Name: " << instructor.getFullName();
    
    Instructor instructorTwo;
    instructorTwo.setFirstName("Oscar");
    instructorTwo.setLastName("Wilde");
    

    return 0;
}

