#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, size1, size2;
    cout << "Enter the number of rows: ";
    cin >> size1;
    cout << "Enter the number of columns: ";
    cin >> size2;
    int arr[size1][size2];
    cout << "Enter the elements: ";
    for (i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The 2D array is:\n";
    for (i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}