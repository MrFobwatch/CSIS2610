/* 
 * File:   PriorityQueue.cpp
 * Author: kyacucci
 * 
 * Created on April 26, 2017, 4:14 PM
 */

#include "PriorityQueue.h"

PriorityQueue::PriorityQueue() {
    maxSize = 10;
    size = 0;
}

void PriorityQueue::addElementToQueue(Element element) {
    elements[size] = element;
    size++;
}

void PriorityQueue::sortQueue(){
    for(int i=0; i< maxSize; i++){ //Priority Loop
        int minElementIndex = i;
        Element minElement = elements[i];
        
        for(int j=i+1; j< maxSize; j++){
            if(elements[j].getPriority() < minElement.getPriority()){
                minElement = elements[j];
                minElementIndex = j;
            }
        }
        
        Element temp = elements[i];
        elements[i] = minElement;
        elements[minElementIndex] = temp;
    } //End Priority Loop    
}

void PriorityQueue::outputQueue(){
    for(int i=0; i<maxSize; i++){
        std::cout << elements[i].getNumber() << "(" << elements[i].getPriority() << ") ";
    }
    std::cout << "\n";
}

void PriorityQueue::outputSum(){
    int sum = 0;
    for(int i=0; i<4; i++){
        sum+= elements[i].getNumber();
    }
    std::cout << "Sum: " << sum << std::endl;
}

void PriorityQueue::start(){
    for(int i=0; i<10; i++){
        Element element;
        elements[i] = element;
    }
    sortQueue();
    outputQueue();
    outputSum();
}