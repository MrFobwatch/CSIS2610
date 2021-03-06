/*
 * File:   main.cpp
 * Author: Kevin
 *
 * Created on February 8, 2017, 5:15 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>

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
    for(int i=2; i<limit; i++) {        
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
int sumArrayElements(int array[], int limit) {
    int sum;
    for(int i=0; i<limit; i++) {        
        sum += array[i];
    }
    return sum;
}
double medianArrayElements(int array[], int limit) {
    double median;
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
    return median;
}
//2d Arrays
void fill2dArrayWithRandomNumbers(int array2d[][10],int range, int offset){
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            array2d[i][j] = createRandomNumber(range, offset);
        }
    }
}
void output2dArray(int array[][10], int limit){
    for(int i=0; i<limit; i++) {
        for(int j=0; j<limit; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
int sum2dArray(int array[][10]){
    int sum = 0;
    for(int col=0; col<10; col++) {
        for(int row=0; row<10; row++) {
            sum += array[row][col];            
        }
    }
    return sum;    
}
void sort2dArraySmall(int array[][10], int size){
    for(int currentRowIndex=0; currentRowIndex<size; currentRowIndex++) {

        for(int currentRowSlider=0; currentRowSlider<size; currentRowSlider++) {

            for( int currentColIndex=0; currentColIndex<size; currentColIndex++) {

                for(int currentColSlider=0; currentColSlider<size; currentColSlider++) {

                    if(array[currentRowIndex][currentColIndex] < array[currentRowSlider][currentColSlider]) { 
                        
                        int temp = array[currentRowIndex][currentColIndex];
                        array[currentRowIndex][currentColIndex] = array[currentRowSlider][currentColSlider];
                        array[currentRowSlider][currentColSlider] = temp;   
                    }
                }             
            }
        }
    }
}
void sort2dArrayQSmall(int array[][10], int size){
    int min, iMinIndex, jMinIndex;
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            min = array[i][j];
            iMinIndex = i;
            jMinIndex = j;
            
            for(int k=j+1; k<size; k++) {
                if(array[i][k] < min) {
                    min = array[i][k];
                    iMinIndex = i;
                    jMinIndex = k;
                }
                
            }
            
            for(int k=i+1; k<size; k++) {
                for(int l=j; l<size; l++) {
                    if(array[k][l] < min) {
                    min = array[k][l];
                    iMinIndex = k;
                    jMinIndex = l;
                    }
                    
                }
            }
        }
    }
}
    
double median2dArray(int array[][10], int limitRow, int limitCol){
    double median, medianLow; //Median is also the Higher median if even number of elements 
    int medianColIndex, medianRowIndex;
    int totalElements = limitRow*limitCol;
    int bottomIndex = ((totalElements)/2)-1; //49
    int upperIndex = (totalElements)/2; //Also the Median Index for odd- numbered arrays //50
    
    if (totalElements % 2 == 1) {
        medianRowIndex = upperIndex/limitRow;       // 50/10=5  array[5][]
        medianColIndex = upperIndex%limitCol;       // 50%10=0 array[][0] 
        median = array[medianRowIndex][medianColIndex];
    }
    else if(totalElements % 2 == 0) {
        medianRowIndex = upperIndex/limitRow;       // 50/10=5  array[5][]
        medianColIndex = upperIndex%limitCol;       // 50%10=0 array[][0] 
        median = array[medianRowIndex][medianColIndex];
        medianRowIndex = bottomIndex/limitRow;          // 49/10=4  array[4][]
        medianColIndex = bottomIndex%limitCol;          // 49%10=9 array[][9] 
        medianLow = array[medianRowIndex][medianColIndex];
        median = (median+medianLow)/2;
    }
    return median;
}
int main(int argc, char** argv) {
    //srand(time(NULL));
    
    //Problem 1
    int size1 = 10;
    int array1[size1]; 
    fillArrayWithRandomNumbers(array1, size1, 201, -100);
    outputArray(array1,size1);
    cout << endl;
    
    //Problem 2
    int size2 = 10;
    int array2[size2]; 
    fillArrayWithRandomNumbers(array2, size2, 10,0);    
    outputArrayWithPlaceholders(array2,size2);
    
    //Problem 3
    int size3 = 100;
    int array3[size3];
    fillArrayWithRandomNumbers(array3, size3, 201, -100);
    //outputArray(array3,size3);
    sortArraySmall(array3, size3);
    //outputArray(array3,size3);
    cout << "Sum of Array3 is " << sumArrayElements(array3, size3) << endl;
    cout << "Average of Array3 is " << (sumArrayElements(array3, size3)) / size3 << endl;
    cout << "Min of Array3 is " << array3[0] << endl;
    cout << "Max of Array3 is " << array3[size3-1] << endl;
    cout << "Median of Array3 is " << medianArrayElements(array3, size3) << endl << endl;
    
    //Problem 4
    int size4 = 10;
    int array4[10][10];
    fill2dArrayWithRandomNumbers(array4, 201, -100);
    output2dArray(array4, size4);
    sort2dArraySmall(array4,size4);
    cout << endl;
    output2dArray(array4, size4);
    cout << "Sum of Array4 is " << sum2dArray(array4) << endl;
    cout << "Average of Array4 is " << sum2dArray(array4)/(size4*size4) << endl;
    cout << "Min of Array4 is " << array4[0][0] << endl;
    cout << "Max of Array4 is " << array4[9][9] << endl;
    cout << "Median of Array4 is " << median2dArray(array4, size4, size4) << endl;
    
    return 0;
}