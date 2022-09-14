#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {25, 5, 47, 36, 96, 46};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int pos;
    cout << "\nEnter the position at which you want to delete the element: ";
    cin >> pos;
    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size -= 1;
    cout << "The array after deletion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}