#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num > 0)
        cout << "It is a +ve number.";
    else if (num < 0)
        cout << "It is a -ve number.";
    else
        cout << "Zero";

    return 0;
}