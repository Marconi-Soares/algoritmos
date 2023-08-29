#include <stdio.h>

typedef struct{
    int min;
    int max;
} Pair;

Pair getMinMax(int array[], int size)
{
    Pair minMax;
    if (size == 1)
    {
        minMax.min = array[0];
        minMax.max = array[0];
    }

    if (array[0] > array[1]) 
    {
        minMax.min = array[1];
        minMax.max = array[0];
    }
    else
    {
        minMax.min = array[0];
        minMax.max = array[1];
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] > minMax.max)
        {
            minMax.max = array[i];
        }
        else if (array[i] < minMax.min)
        {
            minMax.min = array[i];
        }
    }
    return minMax;
}

int main(void)
{
    int array[] = {6, 2, 3, 7, 10, 9};
    int size = sizeof(array) / sizeof(array[0]);
    Pair minMax = getMinMax(array, size);
    printf("O menor valor é %d\n", minMax.min);
    printf("O maior valor é %d\n", minMax.max);
}
