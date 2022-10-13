#include <bits/stdc++.h>
using namespace std;

void convertBinary(int n)
{
    int binaryArray[32];
    int i = 0;
    while (n != 0)
    {
        binaryArray[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryArray[j];
    }
}

int main()
{
    int num;
    cout << "Enter the number for the binary conversion: ";
    cin >> num;
    cout << "The binary form is: ";
    convertBinary(num);
    return 0;
}