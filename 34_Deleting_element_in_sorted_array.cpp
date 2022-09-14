#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 5, 7, 16, 48, 59};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int num;
    cout << "\nEnter the element that you want to delete: ";
    cin >> num;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    size -= 1;
    cout << "The array after deletion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}