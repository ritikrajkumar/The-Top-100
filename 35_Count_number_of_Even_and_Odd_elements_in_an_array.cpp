#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 7, 9, 6, 3, 14, 8, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int countEven = 0, countOdd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    cout << "\nThe number of even elements is: " << countEven;
    cout << "\nThe number of odd elements is: " << countOdd;
    return 0;
}