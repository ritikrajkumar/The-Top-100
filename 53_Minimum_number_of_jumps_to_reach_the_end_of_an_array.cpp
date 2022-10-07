#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int minJumps(int arr[], int n)
{
    int jumps[n];
    int i, j;
    if (n == 0 || arr[0] == 0)
    {
        return INT_MAX;
    }
    jumps[0] = 0;
    for (i = 1; i < n; i++)
    {
        jumps[i] = INT_MAX;
        for (j = 0; j < i; j++)
        {
            if (i <= j + arr[j] && jumps[j] != INT_MAX)
            {
                jumps[i] = min(jumps[i], jumps[j] + 1);
                break;
            }
        }
    }
    return jumps[n - 1];
}

int main()
{
    int arr[] = {1, 3, 6, 1, 0, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The given array is: ";
    printArray(arr, size);
    int result = minJumps(arr, size);
    cout << "\nMinimum number of jumps to reach end is: " << result;
    return 0;
}