#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the numbers followed by a space: ";
    cin >> num1 >> num2;

    int i;
    int sum = 0;
    for (i = num1; i <= num2; i++)
    {
        sum += i;
    }
    cout << "The sum is: " << sum;
    return 0;
}