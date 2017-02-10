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
            sum = array[row][col] + sum;            
        }
    }
    return sum;    
}
void sort2dArraySmall(int array[][10]){
    for(int row=0; row<10; row++) {
        for(int col=0; col<10; col++) {
            for(int i=0; i<10-1; i++){
                int min = array[i][col];
                int minIndex1 = i;  

            for(int j =i+1; j<10; j++){
                if(array[j][col] < min){
                    min = array[j][col];
                    minIndex1 = j;
                }
            }        
            int temp = array[i][col];
            array[i][col] = min;
            array[minIndex1][col] = temp;
            }
        }
    }
}
void sort2dArraySmallA(int array[][10]){
    int temp, minIndexRow, minIndexCol;
    for(int i=0; i<100; i++) {
        for(int row=0; row<10; row++) {
            for(int col=0; col<10; col++) {
                minIndexRow = row;
                minIndexCol = col;
                for(int currentIndexRow=row+1; currentIndexRow<10; currentIndexRow++) {
                    for(int currentIndexCol=col+1; currentIndexCol<10; currentIndexCol++) {
                        if(array[currentIndexRow][currentIndexCol] < array[minIndexRow][minIndexCol]) {
                            minIndexRow = currentIndexRow;
                            minIndexCol = currentIndexCol;
                        }
                    }
                }
                if( minIndexRow != row && minIndexCol != col) {
                    temp = array[row][col];
                    array[row][col] = array[minIndexRow][minIndexCol];
                    array[minIndexRow][minIndexCol] = temp;
                }
            }
        }    
    }
}
//    int min, minIndex1, minIndex2;
//    for(int i=0; i<10-1; i++){
//        for(int j=0; j<10-1-i; j++){
//                        
//            if(array[i][j] < min){
//                min = array[i][j];
//                minIndex1 = i;
//                minIndex2 = j;
//            }
//            int temp = array[i][j];
//            array[i][j] = min;
//            array[minIndex1][minIndex2] = temp;
//        }        
//    }   
//}
void sort2dArrayLarge(int array[][10]){
    for(int i=0; i<10-1; i++){
        for(int j=0; j<10-1-i; j++){
            int max = array[i][j];
            int maxIndex1 = i;
            int maxIndex2 = j;
            
            if(array[i][j] > max){
                max = array[i][j];
                maxIndex1 = i;
                maxIndex2 = j;
            }
            int temp = array[i][j];
            array[i][j] = max;
            array[maxIndex1][maxIndex2] = temp;
        }        
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
    cout << "Median of Array3 is " << medianArrayElements(array3, size3) << endl << endl;
    
    //Problem 4
    int size4 = 10;
    int array4[10][10];
    fill2dArrayWithRandomNumbers(array4, 201, -100);
    //sort2dArrayLarge(array4);
    output2dArray(array4, size4);
    
    sort2dArraySmall(array4);
    output2dArray(array4, size4);
    
    sort2dArraySmallA(array4);
    output2dArray(array4, size4);
    cout << sum2dArray(array4) << endl;;
    
    return 0;
}