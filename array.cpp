#include <iostream>
#include "array.h"

void enterValue(int *array){
    for (int i=0; i < SIZE; ++i) {
        printf("array[%d] = ", i);
        scanf("%d", &*(array + i));
    }
}
void printArray(int *array) {
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] = %d\n",i, *(array + i));
    }
}
int findMaximumValue(int *array) {
    int max = *array;
    for (int i = 0; i < SIZE; ++i ){
        if(*(array + i) > max){
            max = *(array + i);
        }
    }
    return max;
}
int findMiniumValue(int *array){
    int min = *array;
    for (int i = 0; i < SIZE; ++i ){
        if(*(array + i) < min) {
            min = *(array + i);
        }
    }
    return min;
}
float calculateAverage(int *array){
    int sum = 0;
    for (int i = 0; i < SIZE; ++i ) {
        sum = sum + *(array + i);
    }
    float average = (float)sum / SIZE;
    return average;
}