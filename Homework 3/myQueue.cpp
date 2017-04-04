#include <iostream>
#include "myQueue.h"

using namespace std;

Queue::Queue() {
    maxSize = 10;
    size = 0;
    addIndex = 0;
    removeIndex = 0;
}

bool Queue::add(int number) {
    bool added = false;    
    if(removeIndex == (addIndex+1) % maxSize) {
        cout << "Queue is FULL" << endl;
    }
    
    else if(size < maxSize) {
        queue[addIndex] = number;
        addIndex = (addIndex+1) % maxSize;
        size++;
        added = true;
    }//end if
    return added;
}

int Queue::peek() {
    int number = -2000;
    if(addIndex == removeIndex) {
        cout << "Queue is EMPTY" << endl;
        
    }//end if
    else {
        number = queue[removeIndex];
    }    
    return number;    
}

int Queue::remove() {
    int number = -2000;
    if (addIndex == removeIndex) {
        cout << "Queue is EMPTY" << endl;
    }
    else {
        number = queue[removeIndex];
        removeIndex = (removeIndex+1) % maxSize;
        size--;
    }//end if    
    return number;
}

int Queue::getSize() {
    return size;
}

void Queue::clear() {
    size = 0;
    addIndex = 0;
    removeIndex = 0;
}

void Queue::output() {
    for(int i=0; i < size; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}