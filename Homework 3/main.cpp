/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on March 22, 2017, 4:19 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>

#include "myCalculator.h"
#include "person.h"
#include "myQueue.h"
#include "myStack.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Calculator calc;
    Person person;
    Queue queue;
    Stack stack;
    
    //Calculator Class Examples
    cout << "Calculator Test" << endl;
    calc.add(30);
    cout << calc.getTotal() << endl;
    calc.sub(25);
    cout << calc.getTotal() << endl;
    calc.mult(3);
    cout << calc.getTotal() << endl;
    calc.divd(5);
    cout << calc.getTotal() << endl;
    calc.addM(calc.getTotal());
    cout << calc.getMemTotal() << endl;
    calc.clearTotal();
    cout << calc.getTotal() << endl;
    calc.subM(2);
    cout << calc.getMemTotal() << endl;
    calc.clearMem();
    
    cout <<
    calc.getMemTotal()
    << endl << endl;
    
    //Person Class Examples
    cout << "Person Test" << endl;
    person.setID(10);
    cout << person.getID() << endl;
    person.setFirstName("Smith");
    cout << person.getFirstName() << endl;
    person.setLastName("John");
    cout << person.getLastName() << endl <<
    person.getFullName()
    << endl << endl;

    //Queue Class Examples
    cout << "Queue Test" << endl;
    queue.add(10);
    queue.add(20);
    queue.add(30);
    //cout << queue.add(10) << "," << queue.add(20) << "," << queue.add(30) << endl;
    queue.output();
    cout << queue.remove() << " Assert 10" << endl;
    queue.output();
    cout << queue.getSize() << " Assert 2" << endl;
    cout << queue.remove() << " Assert 20" << endl;
    cout << queue.getSize() << " Assert 1" << endl;
    cout << queue.peek() << " Assert 30" << endl;
    queue.clear();    
    cout << queue.peek() <<  " Assert Empty" << endl << endl;
    
    //Stack Class Examples
    cout << "Stack Test" << endl;
    stack.push(100);
    stack.push(200);
    stack.push(300);
    cout << stack.getSize() << " Assert Size 3" << endl;
//    stack.debug();
    cout << stack.pop() << " Assert 300" << endl; 
//    stack.debug();
    cout << stack.getSize() << " Assert Size 2"<< endl; 
    cout << stack.pop() << " Assert Value 200" << endl;
//    stack.debug();
    cout << stack.getSize() << " Assert Size 1" << endl;
    cout << stack.pop() << " Assert Value 100" << endl;
    stack.clear();
    
    cout << stack.peek() << endl
            << endl;
    return 0;
}

