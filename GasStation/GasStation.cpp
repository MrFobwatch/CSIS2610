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
    fullReservoir=rand()%8000+8000;
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
        if(currentReservoir > cars[i].getTankSize()){
            fillCar(cars[i]);
        }
        else if(currentReservoir < cars[i].getTankSize()) {
            std::cout << "NO MORE GAS :(\n";
        }
        if((i+1==numCars)) {
            std::cout << "All Cars Filled :)\n";
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
