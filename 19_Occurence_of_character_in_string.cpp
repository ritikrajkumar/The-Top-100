#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    char ch;
    cout << "Enter the string: ";
    cin >> str;
    cout << "Enter the character: ";
    cin >> ch;

    int count = 0, flag = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            count++;
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "The character " << ch << " has appeared " << count << " times.";
    }
    else
    {
        cout << "The character has appeared zero times.";
    }
    return 0;
}