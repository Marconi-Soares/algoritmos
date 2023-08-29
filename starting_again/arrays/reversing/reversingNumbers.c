#include <stdio.h>

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp =  arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    short arrayLength = sizeof(array) / sizeof(array[0]);
    printArray(array, arrayLength);
    reverseArray(array, 0, arrayLength - 1);
    printArray(array, arrayLength);
}

