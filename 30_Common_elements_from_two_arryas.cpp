#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {12, 48, 78, 96, 87, 36};
    int arr2[] = {78, 63, 96, 25};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "The first array is: ";
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nThe second array is: ";
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "\nThe common elements from the both arrays are: ";
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; i < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
    return 0;
}