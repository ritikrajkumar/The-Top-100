#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, rem, temp, result = 0;
    cout << "Enter the number: ";
    cin >> num;
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        result += rem * rem * rem;
        num /= 10;
    }
    if (temp == result)
    {
        cout << "It is an Armstrong number.";
    }
    else
    {
        cout << "It is not an Armstrong number.";
    }
    return 0;
}