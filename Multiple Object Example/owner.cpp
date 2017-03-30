#include "owner.h"
using namespace std;

Owner::Owner() {
    size = 0;
    addIndex = 0;
    removeIndex = -1;
}

void Owner::setDriver(Person driver) {
    this->driver = driver;
}

Person Owner::getDriver() {
    return driver;
}

bool Owner::addCar(Car car) {
    bool added = false;
    
    if(size < 5) {
        cars[addIndex] = car;
        size++;
        addIndex++;
        added = true;
    }
    return added;
}

void Owner::outputDetails() {
    driver.outputDetails();
    
    for(int i = 0; i < size; i++) {
        cars[i].outputCarDetail();
    }
}