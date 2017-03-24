/* 
 * File:   myQueue.h
 * Author: kyacucci
 *
 * Created on March 22, 2017, 4:31 PM
 */

#ifndef MYQUEUE_H
#define	MYQUEUE_H
#include <iostream>

using namespace std;

class Queue {
    
public:
    Queue();
    bool add(int number);
    int peek();
    int remove();
    int getSize();
    void clear();
    
private:
    int maxSize;
    int size;
    int addIndex;
    int queue[2000];
};

#endif	/* MYQUEUE_H */
