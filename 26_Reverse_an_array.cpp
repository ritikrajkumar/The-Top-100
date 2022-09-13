#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {22, 9, 29, 12, 69, 96};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nThe reversed array is: ";
    for (i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}