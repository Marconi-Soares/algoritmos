#include <bits/stdc++.h>
using namespace std;

struct Pair {
    int min;
    int max;
};

Pair getMinMax(int arr[], int n)
{
    Pair minMax;
    sort(arr, arr + n);
    minMax.min = arr[0];
    minMax.max = arr[n - 1];
    return minMax;
}

int main(void)
{
    int arr[] = { 1000, 11, 445, 1, 330, 3000 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    Pair minMax = getMinMax(arr, arrSize);
    cout << "Min: " << minMax.min << endl;
    cout << "Max: " << minMax.max << endl;
}
