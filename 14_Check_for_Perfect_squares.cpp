#include <bits/stdc++.h>
using namespace std;

bool checkPerfectSquare(int n)
{
    if (n > 0)
    {
        int sq = sqrt(n);
        return (sq * sq) == n;
    }
    return false;
}

int main()
{
    int num;
    cout << "Enter the value: ";
    cin>>num;
    int result = checkPerfectSquare(num);
    if (result)
    {
        cout << "The number " << num << " is a perfect square.";
    }
    else
    {
        cout << "The number " << num << " is not a perfect square.";
    }
    return 0;
}