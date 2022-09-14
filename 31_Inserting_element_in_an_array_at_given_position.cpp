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
    int num, pos;
    cout << "\nEnter the number to be inserted: ";
    cin >> num;
    cout << "Enter the position at which you want to insert the element: ";
    cin >> pos;
    for (int i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    size += 1;
    cout << "The array after inserting the given element: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}