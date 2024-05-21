#include <iostream>
#include "array.h"

void menu(void) {
    printf("1. Enter the values into the array\n");
    printf("2. Display the content of the array\n");
    printf("3. Determine the maximum value\n");
    printf("4. Determine the minimum value\n");
    printf("5. Determine the average value\n");
    printf("0. EXIT\n");
    printf("Select an option:\n");
}

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,};
    printf("Simple array \n");

    int option = 0;
    int max;
    int min;
    float average;

    do {
        menu();
        scanf("%d", &option);
        switch(option){
            case 0:
                break;
            case 1:{
                printf("1. Enter values into the array\n\n");
                enterValue(array);
                break;}
            case 2:{
                printArray(array);
                break;}
            case 3:
                printf("3. Determine the maximum value\n");
                max = findMaximumValue(array);
                printf("%d\n\n",max);
                break;
            case 4:
                printf("4. Determine the minimum value\n");
                min = findMiniumValue(array);
                printf("%d\n\n",min);
                break;
            case 5:
                printf("5. Determine the average value\n");
                average = calculateAverage(array);
                printf("%f\n\n",average);
                break;
            default:
                printf("Enter right number\n");
        }


    }while(option!=0);
    printf("END!");
    return 0;

}
