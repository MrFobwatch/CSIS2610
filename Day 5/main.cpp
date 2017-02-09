/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on February 6, 2017, 5:08 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>


using namespace std;

void outputArray(int array[], int limit){
    for(int i=0; i<limit; i++) {        
        cout << array[i] << ' ';
    }
    cout << endl;
}

int createRandomNumber(int range, int offset){
    int number = rand()%range+offset;
    return number;
} 

void fillArrayWithRandomNumbers(int array[], int size){
    for(int i=0; i<size; i++){
        array[i] = createRandomNumber(100,0);
    }
}
     
void sortArray(int array[], int size){
 for(int i=0; i<size-1; i++){
        int min = array[i];
        int minIndex = i;  
        
        for(int j =i+1; j<size; j++){
            if(array[j] < min){
                min = array[j];
                minIndex = j;
            }
        }        
        int temp = array[i];
        array[i] = min;
        array[minIndex] = temp;
    }   
}
    
int main(int argc, char** argv) {

    int size = 20;
    int numbers[size];
    
    fillArrayWithRandomNumbers(numbers,size);
    outputArray(numbers,size);
    sortArray(numbers,size);   
    outputArray(numbers,size);
        
    return 0;
}

