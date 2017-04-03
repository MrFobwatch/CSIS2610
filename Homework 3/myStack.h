/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myStack.h
 * Author: Kevin
 *
 * Created on March 23, 2017, 10:04 AM
 */

#ifndef MYSTACK_H
#define MYSTACK_H
#include <iostream>

using namespace std;

class Stack {
public:
    Stack();
    bool push(int number);
    int pop();
    int peek();
    int getSize();
    void clear();
    
private:
    int maxSize;
    int stackIndex;
    int size;    
    int stack[5];
};

#endif /* MYSTACK_H */
