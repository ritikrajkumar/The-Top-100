#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {74, 81, 89, 62, 1, 8, 22};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout << "Enter the element that you want to search: ";
    cin >> num;
    int i, flag = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "Element not found.";
    }
    else
    {
        cout << num << " is present in the array.";
    }
    return 0;
}