#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "The reversed string is: ";
    for (int i = str.length(); i >= 0; i--)
    {
        cout << str[i];
    }
    return 0;
}

/*
-> same program in python
string = input('Enter the string: ')
reverse = string[::-1]
print('The reversed string is: ', reverse)
*/