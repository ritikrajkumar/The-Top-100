#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, sum = 0;
    int arr[] = {22, 9, 29, 12, 69, 96};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "\nThe sum of given array elements is: " << sum;
    return 0;
}