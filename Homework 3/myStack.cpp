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
        stack[stackIndex++]= number;
        size++;
//        stackIndex++;
        pushed = true;
    }// end if
    return pushed;    
}

int Stack::pop() {
    int number = -2000;
    
//    if(size>0) {
//        stackIndex--;
        number = stack[--stackIndex];

        size--;
        
//    }
//    else if(size>0) {
//        stackIndex--;
//        number = stack[stackIndex];
//        size = 0;
//    }
////    else if(size=0) {
//        cout << "Stack is EMPTY" << endl;
//    }
//    
    return number;
}

int Stack::peek() {
    int number = -2000;
    
    if(size>0) {
        stackIndex--;
        number = stack[stackIndex];
        stackIndex++;        
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