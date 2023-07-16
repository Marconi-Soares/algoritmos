#include <stdio.h>
#include <stdbool.h>


void swap(int* pX, int* pY){
    int pTemp = *pX;
    *pX = *pY;
    *pY = pTemp;
}

void bubbleSort(int array[], int arrLength){
    int i, j;
    bool swapped;
    for (i = 0; i < arrLength - 1; i++){
        for (j = 0; j < arrLength - i - 1; j++){
            if (array[j] > array[j + 1]){
                swap(&array[j], &array[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false){
            break;
        }
    }
}

void printArray(int array[], int arrLength){
    for (int i = 0; i < arrLength; i++){
        printf("%d ", array[i]);
    }
}

int main(void){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, arrLength);
    printArray(arr, arrLength);
    return 0;
}
