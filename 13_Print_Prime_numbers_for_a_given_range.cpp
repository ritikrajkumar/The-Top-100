#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int flag = 1;
    if (n < 2)
    {
        flag = 0;
    }
    else
    {
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % 2 == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    int num1, num2;
    cout << "Enter value for the starting point: ";
    cin >> num1;
    cout << "Enter value for the ending point: ";
    cin >> num2;
    cout << "The prime numbers between the given range are: ";
    for (int i = num1 + 1; i < num2; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}