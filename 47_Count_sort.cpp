#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int maximum(int *arr, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void countSort(int *arr, int n)
{
    int i, j;
    // find the maximum element in A
    int max = maximum(arr, n);

    // create the count array
    int *count = (int *)malloc((max + 1) * sizeof(int));

    // initialize the array elements to 0
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    // increment the corresponding index in the count array
    for (i = 0; i < n; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }

    i = 0; // counter for count array
    j = 0; // counter for given array arr

    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int arr[] = {12, 74, 89, 3, 14, 25, 47, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    printArray(arr, size);
    countSort(arr, size);
    cout << "\nThe sorted array is: ";
    printArray(arr, size);
    return 0;
}