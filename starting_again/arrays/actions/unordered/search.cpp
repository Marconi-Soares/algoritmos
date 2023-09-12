#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}


int main(void)
{
    int arr[] = { 1, 3, 5, 2, 4 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 6;
    
    int res = search(arr, size, key);

    if (res == -1)
    {
        cout << "Key not found" << endl;
    }
    else 
    {
        cout << "Key found at: " << res+1 << endl;
    }
    return 0;
}
