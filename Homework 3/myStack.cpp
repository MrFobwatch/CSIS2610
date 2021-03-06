/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myStack.cpp
 * Author: Kevin
 * 
 * Created on March 23, 2017, 10:04 AM
 */

#include "myStack.h"

Stack::Stack() {
    maxSize = 2000;
    size = 0;
    stackIndex = 0;
}

bool Stack::push(int number) {
    bool pushed = false;
    if(size < maxSize) {
        stack[stackIndex]= number;
        stackIndex++;
        size++;
        pushed = true;
    }// end if
    
    else if(size==maxSize) {
        cout << "Stack is FULL" << endl;
    }
    return pushed;    
}

int Stack::pop() {
    int number = -2000;
    
    if(size>0) {
        stackIndex--;
        number = stack[stackIndex];
        size--;
        
    }
//    if(size>0) {
//        stackIndex--;
//        number = stack[stackIndex];
//        size = 0;
//    }
    else if(size=0) {
        cout << "Stack is EMPTY" << endl;
    }
    
    return number;
}

int Stack::peek() {
    int number = -2000;
    
    if(size>0) {
        stackIndex--;
        number = stack[stackIndex];
        stackIndex++;        
    }
    
    else if(size==maxSize) {
        cout << "Stack is FULL" << endl;
    }
    return number;
}

int Stack::getSize() {
    return size;
}

void Stack::clear() {
    size = 0;
    stackIndex = 0;
}

void Stack::debug() {
    cout << "stackIndex: " << stackIndex << endl;
    cout << "size: " << size << endl;
    cout << "Stack: ";
    for(int i=0; i < size; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
}