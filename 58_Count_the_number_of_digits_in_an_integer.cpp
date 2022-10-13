#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, temp, digit = 0;
    cout << "Enter the number: ";
    cin >> num;
    temp = num;
    while (num != 0)
    {
        digit++;
        num /= 10;
    }
    cout << "The number of digits in the integer " << temp << " is " << digit << ".";
    return 0;
}