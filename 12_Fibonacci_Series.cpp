#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The desired series is: ";
    for (int i = 0; i < num; i++)
    {
        cout << fibo(i) << " ";
    }
    return 0;
}
