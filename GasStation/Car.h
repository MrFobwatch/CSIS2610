/* 
 * File:   Car.h
 * Author: kyacucci
 *
 * Created on April 24, 2017, 4:43 PM
 */

#ifndef CAR_H
#define	CAR_H
#include <cstdlib>

class Car {

public:
    Car();
//    Car(const Car& orig);
//    virtual ~Car();
    int getTankSize();    
    
private:
    void setTankSize(int tankSize);
    int tankSize;
};

#endif	/* CAR_H */

