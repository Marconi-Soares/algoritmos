#include <stdio.h>


int binarySearch(int array[], int left, int right, int key){

    while (left <= right){
        int mid = left + (right - left) / 2;
        
        if (array[mid] == key){
            return mid;
        }

        if (array[mid] < key){
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(void){
    int array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int arrLength = sizeof(array) / sizeof(array[0]);
    int key = 19;
    int res = binarySearch(array, 0, arrLength - 1, key);

    if (res != -1) {
        printf("key found at index '%d'\n", res);
    }
    else {
        printf("Key not found\n");
    }

    return 0;
}

