#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {12, 77, 21, 9, 74, 36, 96};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    sort(arr, arr + size);
    cout << "\nThe sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
-> To sort in descending order:
sort(arr, arr+size, greater<int>());
*/