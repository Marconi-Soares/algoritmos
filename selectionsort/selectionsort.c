#include <stdio.h>

void swap(int* pX, int* pY){
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
}

void printArray(int array[], int arrLength){
    for (int i = 0; i < arrLength; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void selectionSort(int array[], int arrLength){
    int i, j, min_index;

    for (i = 0; i < arrLength - 1; i++){
        min_index = i;
        for (j = i + 1; j < arrLength; j++){
            if (array[j] < array[min_index]){
                min_index = j;
            }
            if (min_index != i){
                swap(&array[min_index], &array[i]);
            }
        }

    }
}

int main(void){
    int array[] = {64, 25, 12, 22, 11};
    int arrLength = sizeof(array) / sizeof(array[0]);
    selectionSort(array, arrLength);
    printArray(array, arrLength);
}

