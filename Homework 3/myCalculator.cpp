/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myCalculator.cpp
 * Author: Kevin
 * 
 * Created on March 24, 2017, 12:34 AM
 */

#include "myCalculator.h"

Calculator::Calculator() {
    total = 0;
}

double Calculator::add(double number) {
   total = total + number;
   return total;
}

double Calculator::sub(double number) {
    total = total - number;
    return total;
}

double Calculator::mult(double number) {
    total = total * number;
    return total;
}

double Calculator::divd(double number) {
    total = total / number;
}

double Calculator::getTotal() {
    return total;
}

void Calculator::clearTotal() {
    total = 0;
}

double Calculator::addM(double number) {
    totalM = totalM + number;
   return totalM;
}

double Calculator::subM(double number) {
    totalM = totalM - number;
   return totalM;
}

double Calculator::getMemTotal() {
    return totalM;
}

void Calculator::clearMem() {
    totalM = 0;
}