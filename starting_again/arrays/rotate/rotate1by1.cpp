#include <iostream>
using namespace std;

void rotate(int arr[], int d, int n)
{
    int p = 1;
    while (p <= d)
    {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}


int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    rotate(arr, 3, size);
    printArray(arr, size);
}
