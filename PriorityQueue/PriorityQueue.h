/* 
 * File:   PriorityQueue.h
 * Author: kyacucci
 *
 * Created on April 26, 2017, 4:14 PM
 */

#ifndef PRIORITYQUEUE_H
#define	PRIORITYQUEUE_H
#include <iostream>
#include "Element.h"

class PriorityQueue {

public:
    PriorityQueue();
    void addElementToQueue(Element element);
    void sortQueue();
    void outputQueue();
    void outputSum();
    void start();

private:
    Element elements[10];
    int size;
    int maxSize;
};

#endif	/* PRIORITYQUEUE_H */

