#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 25, 47, 56, 65, 69};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int num;
    cout << "\nEnter the number to be inserted: ";
    cin >> num;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > num)
        {
            for (int j = size - 1; j >= i; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[i] = num;
            break;
        }
    }
    size += 1;
    cout << "The array after inserting the given element: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}