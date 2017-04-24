/* 
 * File:   Car.cpp
 * Author: kyacucci
 * 
 * Created on April 24, 2017, 4:43 PM
 */

#include "Car.h"

Car::Car() {
    setTankSize(rand()%15+15);
}

//Car::Car(const Car& orig) {
//}

//Car::~Car() {
//}

int Car::getTankSize(){
      return tankSize;
}
 
void Car::setTankSize(int tankSize){
      this->tankSize = tankSize;
}