/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on February 20, 2017, 6:16 PM
 */

#include <cstdlib>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

/*
int add(int numberOne, int numberTwo) {
    int sum = numberOne + numberTwo;
    return sum;
}

bool checkNumberOr(int number, int low, int high) {
    return number > low || number < high;
}

bool checkNumberAnd(int number, int low, int high) {
    return number > low && number < high;
}

bool checkNumber(int number,int low, int high) {
    bool value = false;
    if(number > 2) {
        checkNumberAnd(number, low, high);
    }
    else {
        checkNumberOr(number, low, high);
    }
}
*/
const int maxSize = 3;
int size = 0;
int addIndex = 0;

int createRandomNumber(int range, int offset){
    int number = rand()%range+offset;
    return number;
}

bool add(int number,int queue[]) {
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

void fillQueueWithRandomNumbers(int queue[], int range, int offset){
    for(int i=0; i<maxSize; i++){
        add(createRandomNumber(range, offset), queue);
    }
}

int remove(int queue[]) {
    int number = -2000;
    if(size > 0) {
        number = queue[0];
        addIndex--;
        for(int i=1; i<size; i++) {
            queue[i-1] = queue[i];
        }// end i loop
        size--;
    }//end if
    else {
        cout << "Queue is EMPTY" << endl;
    }
    return number;
}

void outputQueue(int queue[]) {
    for(int i=0; i < size; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

void printQueue(queue<int>q) {
    queue<int>temp = q;
    while (!temp.empty()) {
        cout << temp.front() << ' ';
        temp.pop();
    }
  cout << '\n';
}

//STACK CODE
int stackIndex = 0;

bool push(int number, int stack[]) {
    bool pushed = false;
    if(size < maxSize) {
        stack[stackIndex]= number;
        stackIndex++;
        size++;
        pushed = true;
    }// end if
    return pushed;
}

int pop(int stack[]) {
    int number = -1000;
    
    if(size>0) {
        stackIndex--;
        number = stack[stackIndex];
        size--;
        stackIndex--;        
    }
    return number;
}

void clear(int stack[]) {
    stackIndex = 0;
    size = 0;
}

void fillStackWithRandomNumbers(int stack[], int amount, int range, int offset){
    for(int i=0; i<amount; i++){
        push(createRandomNumber(range, offset), stack);
    }
}

void printStack(stack<int>s) {
    stack<int> temp (s);
    while (!temp.empty()) {
        cout << temp.top() << ' ';
        temp.pop();
    }
  cout << '\n';
}

int main(int argc, char** argv) {
/*    int total = 0;
    for(int i=0; i<5; i++) {
        int value = add(i*5, i*3);        
        cout << "Sum: " << value << endl;
        total += value;
    }
    cout << "Total: " << total << endl;
    
    for(int i=0; i < 5; i++){
        cout << checkNumber(i, 1, 3) << endl;
    }
*/
    int myqueue[maxSize];
    fillQueueWithRandomNumbers(myqueue, 100, 1);
    //outputQueue(myqueue);
    //add(7, myqueue);
    int stackarray[15];
    int value;
    clear(stackarray);
    cout << "Stack Size = " << size << endl;
    push(10, stackarray);
    push(20, stackarray);
    cout << "Stack Size = " << size << endl;
    value = pop(stackarray);
    cout << "Stack Popped " << value << endl;
    fillStackWithRandomNumbers(stackarray, 15, 100, 1);
    value = pop(stackarray);
    cout << "Stack Popped " << value << endl;
    value = pop(stackarray);
    cout << "Stack Popped " << value << endl;
    clear(stackarray);
    cout << "Stack Size = " << size << endl;
    
    
    //Template Code
    queue<int> numbers;
    numbers.push(3);
    numbers.push(7);
    printQueue(numbers);
    
    stack<int> numstack;
    numstack.push(4);
    numstack.push(3);
    printStack(numstack);
    return 0;    
}