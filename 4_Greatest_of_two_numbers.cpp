#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the numbers followed by a space: ";
    cin >> num1 >> num2;

    if (num1 > num2)
        cout << num1 << " is greater.";
    else if (num2 > num1)
        cout << num2 << " is greater.";
    else
        cout << "Both are equal.";

    return 0;
}