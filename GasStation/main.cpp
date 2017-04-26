/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on April 24, 2017, 4:42 PM
 */

#include "GasStation.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    srand(time(NULL));
    GasStation gasStation;
//    Car car;
    gasStation.simulate(500);
    
    std::cout<< "Total Revenue: " << gasStation.getTotalRevenue() << std::endl;
    std::cout<< "Total Gallons: " << gasStation.getTotalGallons() << std::endl;
    std::cout<< "Full Reservoir: " << gasStation.getFullReservoir() << std::endl;
    std::cout<< "Remaining Gas: " << gasStation.getRemainingFuel() << std::endl;

//    cout<< "Tank Size: "<< car.getTankSize()<<endl;

    return 0;
}

