#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    // Swap arr[low] and arr[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int *arr, int low, int high)
{
    int partitionIndex; // index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);  // sort left subarray
        quickSort(arr, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
    int arr[] = {12, 74, 89, 3, 14, 25, 47, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    printArray(arr, size);
    int low = 0;
    int high = size - 1;
    quickSort(arr, low, high);
    cout << "\nThe sorted array is: ";
    printArray(arr, size);
    return 0;
}