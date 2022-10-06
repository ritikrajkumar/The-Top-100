#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {45, 34, 35, 65, 23, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n;
    cout << "Enter the number of times you want to print the array: ";
    cin >> n;
    cout << "The given array is: ";
    printArray(arr, size);
    cout << "\nPrinting the array " << n << " times:\n";
    for (int i = 0; i < n; i++)
    {
        printArray(arr, size);
        cout << endl;
    }
    return 0;
}