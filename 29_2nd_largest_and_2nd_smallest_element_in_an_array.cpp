#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int arr[] = {22, 9, 29, 12, 69, 96};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int smallest = arr[0], secondSmallest = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }
    int largest = arr[0], secondLargest = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    cout << "\nThe second smallest and the second largest element in the array are " << secondSmallest << " and " << secondLargest << " respectively.";
    return 0;
}