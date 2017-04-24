/* 
 * File:   GasStation.cpp
 * Author: kyacucci
 * 
 * Created on April 24, 2017, 4:42 PM
 */

#include "GasStation.h"

GasStation::GasStation() {
    price=2;
    totalRevenue=0;
    totalGallons=0;
    fullReservoir=rand()%7000+8000;
    currentReservoir = fullReservoir;
}

//GasStation::GasStation(const GasStation& orig) {
//}
//
//GasStation::~GasStation() {
//}

void GasStation::simulate(int numCars){
    Car cars[numCars];
    for(int i=0;i<numCars;i++){
        if(currentReservoir > 14){
            fillCar(cars[i]);
        }
        else {
            std::cout<< "NO MORE GAS :(" << std::endl;
        }
    }
}

int GasStation::getTotalRevenue(){
    return totalRevenue;
}

int GasStation::getTotalGallons(){
    return totalGallons;
}

int GasStation::getRemainingFuel(){
    return currentReservoir;
}
int GasStation::getFullReservoir(){
    return fullReservoir;
}

void GasStation::fillCar(Car car){
    int revenue=0;
    int tankSize = car.getTankSize();
    revenue=tankSize*price;
    totalRevenue+=revenue;
    totalGallons+=tankSize;
    currentReservoir-=tankSize;
    
}
