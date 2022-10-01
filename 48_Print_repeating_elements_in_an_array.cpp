#include <bits/stdc++.h>
using namespace std;

int bubbleSort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}

void printDuplicates(int *arr, int n)
{
    cout << "The repeating elements are: ";
    int i;
    for (i = 0; i < n; i++)
    {
        int flag = 0;
        while (i < n - 1 && arr[i] == arr[i + 1])
        {
            flag = 1;
            i++;
        }
        if (flag)
        {
            cout << arr[i - 1] << " ";
        }
    }
}

int main()
{
    int arr[] = {12, 74, 89, 56, 47, 74, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    // "sort(arr, arr + size)" can be also used to sort the array.
    bubbleSort(arr, size);
    printDuplicates(arr, size);
    return 0;
}