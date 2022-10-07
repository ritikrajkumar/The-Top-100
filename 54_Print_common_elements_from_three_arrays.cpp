#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void findCommonElements(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
{
    for (int i = 0; i < n1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n2; j++)
        {
            if (ar1[i] == ar2[j])
            {
                for (int k = 0; k < n3; k++)
                {
                    if (ar2[j] == ar3[k])
                    {
                        flag = 1;
                        k++;
                        break;
                    }
                }
                j++;
                break;
            }
        }
        if (flag)
        {
            cout << ar1[i] << " ";
        }
    }
}

int main()
{
    int arr1[] = {12, 89, 78, 36, 12, 96, 25, 7};
    int arr2[] = {89, 25, 13, 7, 82};
    int arr3[] = {78, 25, 89, 7, 36, 10, 95};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "The first array is: ";
    printArray(arr1, size1);
    cout << "\nThe second array is: ";
    printArray(arr2, size2);
    cout << "\nThe third array is: ";
    printArray(arr3, size3);
    cout << "\nThe common elements are: ";
    findCommonElements(arr1, arr2, arr3, size1, size2, size3);
    return 0;
}