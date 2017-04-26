/* 
 * File:   Element.h
 * Author: kyacucci
 *
 * Created on April 26, 2017, 4:13 PM
 */

#ifndef ELEMENT_H
#define	ELEMENT_H
#include <cstdlib>

class Element {
public:
    Element();
    int getNumber();
    int getPriority();

private:
    int number;
    int priority;
    
};

#endif	/* ELEMENT_H */

