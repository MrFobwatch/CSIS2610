#include <iostream>
#include "myQueue.h"

using namespace std;

Queue::Queue() {
    maxSize = 2000;
    size = 0;
    addIndex = 0;
}

bool Queue::add(int number) {
    bool added = false;
    
    if(size < maxSize) {
        queue[addIndex] = number;
        addIndex++;
        size++;
        added = true;
    }//end if
    
    else {
        cout << "Queue is FULL" << endl;
    }
    return added;
}

int Queue::peek() {
    int number = -2000;
    if(size > 0) {
        number = queue[0];
    }//end if
    
    else {
        cout << "Queue is EMPTY" << endl;
    }
    
    return number;    
}

int Queue::remove() {
    int number = -2000;
    if(size > 0) {
        number = queue[0];
        addIndex--;
        
        for(int i=0; i<size; i++) {
            queue[i] = queue[i+1];
        }// end i loop
        
        size--;
    }//end if
    
    else {
        cout << "Queue is EMPTY" << endl;
    }
    
    return number;
}

int Queue::getSize() {
    return size;
}

void Queue::clear() {
    size = 0;
    addIndex = 0;
}

void Queue::output() {
    for(int i=0; i < size; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}