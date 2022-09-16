#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 8, 9, 16, 31, 48, 62};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout << "Enter the element that you want to search: ";
    cin >> num;
    int i;
    int low = 0;
    int high = size - 1;
    int step = sqrt(size);
    int flag = 0;
    for (i = 0; i < size; i++)
    {
        if (num < arr[step])
        {
            high = step - 1;
        }
        else
        {
            low = step + 1;
        }
    }
    for (i = low; i <= high; i++)
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