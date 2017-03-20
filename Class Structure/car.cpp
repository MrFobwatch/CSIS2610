#include "car.h"

Car::Car() {
    
}

string Car::getMake() {
    return make;
}

void Car::setMake(string make) {
    this->make = make;
}

string Car::getModel() {
    return model;
}
void Car::setModel(string model) {
    this->model = model;
}

string Car::getColor() {
    return color;
}

void Car::setColor(string color) {
    this->color = color;
}

int Car::getYear() {
   return year; 
}

void Car::setYear(int year) {
    this->year = year;
}
