#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int *arr, int n)
{
    int temp, flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag)
        {
            return;
        }
    }
}

int main()
{
    int arr[] = {12, 74, 89, 3, 14, 25, 47, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    printArray(arr, size);
    bubbleSort(arr, size);
    cout << "\nThe sorted array is: ";
    printArray(arr, size);
    return 0;
}