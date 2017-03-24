/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myCalculator.h
 * Author: Kevin
 *
 * Created on March 24, 2017, 12:34 AM
 */

#ifndef MYCALCULATOR_H
#define MYCALCULATOR_H

class Calculator {
    
public:
    Calculator();
    double add(double number);
    double sub(double number);
    double mult(double number);
    double divd(double number);
    double getTotal();
    void clearTotal();
    double addM(double number);
    double subM(double number);
    double getMemTotal();
    void clearMem();
    
private:
    double total;

};

#endif /* MYCALCULATOR_H */

