#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        count++;
    }
    cout << "The length of given string is " << count << ".";
    return 0;
}

/*
-> length() function can be also used to find the length of any given string.
eg: str.length()
*/