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
    int smallest = arr[0], largest = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "\nThe smallest and the largest element in the array are " << smallest << " and " << largest << " respectively.";
    return 0;
}