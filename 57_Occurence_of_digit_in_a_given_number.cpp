#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, digit, temp, rem, count = 0;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the digit to find: ";
    cin >> digit;
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        if (rem == digit)
        {
            count++;
        }
        num /= 10;
    }
    cout << "The digit " << digit << " has appeared " << count << " times in the number " << temp <<".";
    return 0;
}