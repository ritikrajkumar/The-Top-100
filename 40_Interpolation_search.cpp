#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 8, 9, 16, 31, 48, 62};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout << "Enter the element that you want to search: ";
    cin >> num;
    int low = 0;
    int high = size - 1;
    int flag = 0;
    while (low <= high)
    {
        int mid = low + (high - low) * ((num - arr[low]) / (arr[high] - arr[low]));
        if (arr[mid] == num)
        {
            flag = 1;
        }
        if (arr[mid] < num)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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