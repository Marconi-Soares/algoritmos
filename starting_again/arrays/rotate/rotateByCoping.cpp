#include <iostream>
using namespace std;

void rotate(int arr[], int d, int n)
{
    int temp[n];
    int j = 0;

    for (int i = d; i < n; i++)
    {
        temp[j] = arr[i];
        j++;
    }

    for (int i = 0; i < d; i++)
    {
        temp[j] = arr[i];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
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
    int arr[] = { 1, 2, 3, 4, 5, 6, };
    int N = sizeof(arr)/sizeof(arr[0]);
    int d = 2;

    rotate(arr, d, N);
    printArray(arr, N);
}
