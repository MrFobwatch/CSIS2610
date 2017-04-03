#include <iostream>
#include "myQueue.h"

using namespace std;

Queue::Queue() {
    maxSize = 4;
    elementCount = 0;
    addIndex = 0;
    removeIndex = 0;
}

bool Queue::add(int number) {
    bool added = false;
    
    if(elementCount < maxSize) {
        queue[addIndex] = number;
        addIndex++;
        elementCount++;
        added = true;
    }//end if
    
    else {
        cout << "Queue is FULL" << endl;
    }
    return added;
}

int Queue::peek() {
    int number = -2000;
    if(elementCount > 0) {
        number = queue[removeIndex];
    }//end if
    
    else {
        cout << "Queue is EMPTY" << endl;
    }
    
    return number;    
}

int Queue::remove() {
    int number = -2000;
    if(elementCount > 0) {
        number = queue[removeIndex];
//        addIndex;
        removeIndex;
        
        
        elementCount--;
    }//end if
    
    else {
        cout << "Queue is EMPTY" << endl;
    }
    
    return number;
}

int Queue::getSize() {
    return elementCount;
}

void Queue::clear() {
    elementCount = 0;
    addIndex = 0;
}

void Queue::output() {
    for(int i=0; i < elementCount; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}