#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int duplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1];
    return j;
}

int main()
{
    int arr[] = {10, 20, 20, 30, 40, 40, 40, 50, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    printArray(arr, size);
    cout << "\nThe array after removing the duplicate elements is: ";
    size = duplicates(arr, size);
    printArray(arr, size);
    return 0;
}