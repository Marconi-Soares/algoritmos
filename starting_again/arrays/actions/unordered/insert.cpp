#include <iostream>
using namespace std;


int insert(int arr[], int size, int items_count, int key)
{
    if (items_count >= size)
        return items_count;

    arr[items_count++] = key;
    return items_count; 
}

void printArray(int arr[], int items_count)
{
    for (int i = 0; i < items_count; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(void)
{
    int arr[4] = { 1, 2, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int items_count = 3;
     
    cout << "Before: " << items_count << endl;
    printArray(arr, items_count);

    items_count = insert(arr, size, items_count, 4);

    cout << "After: " << items_count << endl;
    printArray(arr, items_count);

    cout << endl;
}
