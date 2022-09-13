#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}