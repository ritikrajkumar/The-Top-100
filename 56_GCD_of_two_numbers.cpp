#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1 = 18, num2 = 45, gcd = 1;
    for (int i = 1; i <= num1 || i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
    cout << "The GCD is: " << gcd;
    return 0;
}