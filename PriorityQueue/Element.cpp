/* 
 * File:   Element.cpp
 * Author: kyacucci
 * 
 * Created on April 26, 2017, 4:13 PM
 */

#include "Element.h"

Element::Element() {
    number = rand()% 98 + 1;
    priority = rand()% 4 + 1;
}

int Element::getNumber() {
    return number;
}

int Element::getPriority() {
    return priority;
}

