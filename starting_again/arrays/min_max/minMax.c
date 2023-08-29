#include <stdio.h>

typedef struct {
    int min;
    int max;
} Pair;


Pair getMinMax(int array[], int size)
{
    Pair pair;

    for (int i = 0; i < size - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j <  size - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0) 
        {
            break;
        }
    }
    pair.max = array[size - 1];
    pair.min = array[0];
    return pair; 
}

int main(void)
{
    int array[] = {13, 10, 12, 1, 1000, 5};
    int size = sizeof(array) / sizeof(array[0]);
    Pair pair = getMinMax(array, size);
    printf("O menor valor é %d\n", pair.min);
    printf("O maior valor é %d\n", pair.max);
}
