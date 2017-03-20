/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on March 15, 2017, 5:13 PM
 */

#include <cstdlib>
#include "instructor.h"
#include "car.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int number = 0;
    
    Instructor instructor;
    instructor.setFirstName("Jough");
    instructor.setLastName("Psymthe");
    cout << "Full Name: " << instructor.getFullName() << endl;
    
    Instructor instructorTwo;
    instructorTwo.setFirstName("Oscar");
    instructorTwo.setLastName("Wilde");
    
    Car car;
    Car cars[3];
    
    car.setMake("Tesla");
    car.setModel("Model 3");
    car.setColor("Silver");
    car.setYear(2017);
   
    cout << "Car Make: " << car.getMake() << endl;
    cout << "Car Model: " << car.getModel() << endl;
    cout << "Car Year: " << car.getYear() << endl;
    cout << "Car Color: " << car.getColor() << endl;
    
    for(int i=1; i<3; i++) {
        cars[i];
        
        string make;
        cin >> make;
        cars[i].setMake(make);

        string model;
        cin >> model;
        cars[i].setModel(model);
        
        int year;
        cin >> year;
        cars[i].setYear(year);
    }
    for(int i=1; i<3; i++) {
    cout << "Car Make: " << cars[i].getMake() << endl;
    cout << "Car Model: " << cars[i].getModel() << endl;
    cout << "Car Year: " << cars[i].getYear() << endl;
    }
    return 0;
}

