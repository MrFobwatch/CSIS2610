/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on February 20, 2017, 6:16 PM
 */

#include <cstdlib>
#include <iostream>
#include <queue>

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
const int maxSize = 10;
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
void printQueue(int queue) {
    explicit queue<int> temp = queue;
    while (!temp.empty()) {
        std::cout << ' ' << temp.front();
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
    queue<int> numbers;
    fillQueueWithRandomNumbers(myqueue, 100, 1);
    outputQueue(myqueue);
    //add(7, myqueue);
    
    
    
    
    //numbers.push(3);
   // numbers.push(7);
    //printQueue(numbers);
    return 0;    
}