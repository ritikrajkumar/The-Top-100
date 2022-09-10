#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, rem, temp, rev = 0;
    cout << "Enter the number: ";
    cin >> num;
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        rev *= 10 + rem;
        num /= 10;
    }
    if (temp == rev)
    {
        cout << "It is a Palindrome number.";
    }
    else
    {
        cout << "It is not a Palindrome number.";
    }
    return 0;
}