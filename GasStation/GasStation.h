/* 
 * File:   GasStation.h
 * Author: kyacucci
 *
 * Created on April 24, 2017, 4:42 PM
 */

#ifndef GASSTATION_H
#define	GASSTATION_H
#include <iostream>
#include "Car.h"
class GasStation {

public:
    GasStation();
//    GasStation(const GasStation& orig);
//    virtual ~GasStation();
    void simulate(int numCars);
    int getTotalRevenue();
    int getTotalGallons();
    int getRemainingFuel();
    int getFullReservoir();
    void fillCar(Car car);

private:
    int price; //dollars per gallon
    int totalRevenue;
    int totalGallons;
    int fullReservoir;
    int currentReservoir;
};

#endif	/* GASSTATION_H */

