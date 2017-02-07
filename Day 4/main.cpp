/* 
 * File:   main.cpp
 * Author: kyacucci
 *
 * Created on February 1, 2017, 5:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    int size = 26;
    int numbers[size];
    
//    
//    for(int i=0; i<size; i++){
//        numbers[i]=i*sin(4*atan(1)/4*i);
//        cout<< numbers[i] << ", ";
//    }
//    cout << endl << "The value at the 80th index = " << numbers[80] << endl;
//    for(int i=50; i<size; i++){
//        if(numbers[i] == 62 || numbers[i] == -62) {
//            cout << "Index = " << i << endl;
//        }
        
//    }
    
    for( int i=0; i<size; i++){
        numbers[i]= pow((-1),i+1)*2*(i);
        cout << numbers[i] << ",";
    }
    
    cout << endl;
    
    //SORT
    int min;
    int minIndex;
    
    for(int i=0; i<size-1; i++){
        min = numbers[i];
        minIndex = i;        
        for(int j =i+1; j<size; j++){
            if(numbers[j] < min){
                min = numbers[j];
                minIndex = j;
            }
        }
        
        int temp = numbers[i];
        numbers[i] = min;
        numbers[minIndex] = temp;
    }
            
    for( int i=0; i<size; i++){
        //numbers[i]= pow((-1),i+1)*2*(i);
        cout << numbers[i] << ",";
    }
    
    return 0;
}

