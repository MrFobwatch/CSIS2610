/*
 * File:   main.cpp
 * Author: Kevin
 *
 * Created on February 8, 2017, 5:15 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * Code for Problems 1-4
 * All necessary functions are included
 */
int createRandomNumber(int range, int offset){
    int number = rand()%range+offset;
    return number;
}
void fillArrayWithRandomNumbers(int array[], int size, int range, int offset){
    for(int i=0; i<size; i++){
        array[i] = createRandomNumber(range, offset);
    }
}
void outputArray(int array[], int limit){
    for(int i=0; i<limit; i++) {        
        cout << array[i] << ' ';
    }
    cout << endl;
}
void outputArrayWithPlaceholders(int array[], int limit){
    for(int i=0; i<limit; i++) {        
        for(int k=0; k<i-1; k++) {
            cout << array[k] << ' ';
        }
        for(int j = limit-i-1; j>0; j--) {
            cout << "# ";
        }
        cout << endl;
    }
    cout << endl;
}
void sortArraySmall(int array[], int size){
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
void sortArrayLarge(int array[], int size){
    for(int i=0; i<size-1; i++){
        int max = array[i];
        int maxIndex = i;  
        
        for(int j =i+1; j<size; j++){
            if(array[j] > max){
                max = array[j];
                maxIndex = j;
            }
        }        
        int temp = array[i];
        array[i] = max;
        array[maxIndex] = temp;
    }   
}
int sumArrayElements(int array[], int limit) {
    int sum;
    for(int i=0; i<limit; i++) {        
        sum = array[i] + sum;
    }
    return sum;
}
int medianArrayElements(int array[], int limit) {
    int median;
    int medianIndex;
    int bottomIndex = limit/2;
    int upperIndex = ((limit)/2)+1;
    if (limit % 2 == 1) {
        medianIndex = (limit+1)/2;
        median = array[medianIndex];
    }
    else if(limit % 2 == 0) {
        median = (array[bottomIndex] + array[upperIndex])/2;
    }
}
int main(int argc, char** argv) {
    //Problem 1
    int size1 = 10;
    int array1[size1]; 
    fillArrayWithRandomNumbers(array1, size1, 201, -100);
    outputArray(array1,size1);
    
    //Problem 2
    int size2 = 10;
    int array2[size2]; 
    fillArrayWithRandomNumbers(array2, size2, 10,0);    
    outputArrayWithPlaceholders(array2,size2);
    
    //Problem 3
    int size3 = 100;
    int array3[size3];
    fillArrayWithRandomNumbers(array3, size3, 201, -100);
    sortArrayLarge(array3, size3);
    cout << "Sum of Array3 is " << sumArrayElements(array3, size3) << endl;
    cout << "Average of Array3 is " << sumArrayElements(array3, size3) / 2 << endl;
    sortArraySmall(array3, size3);
    cout << "Min of Array3 is " << array3[0] << endl;
    sortArrayLarge(array3, size3);
    cout << "Max of Array3 is " << array3[0] << endl;
    sortArraySmall(array3, size3);
    cout << "Median of Array3 is " << medianArrayElements(array3, size3) << endl;
    
    //Problem 4
    int size4 = 10;
    int array4[size4][size4];
    //fillArrayWithRandomNumbers(array4, size4, 201, -100);
    
    
    
    
    
    return 0;
}