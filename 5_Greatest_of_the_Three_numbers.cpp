#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter the numbers followed by a space: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3)
        cout << num1 << " is the greatest.";
    else if (num2 > num1 && num2 > num3)
        cout << num2 << " is the greatest.";
    else
        cout << num3 << " is the greatest.";

    return 0;
}