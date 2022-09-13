#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    cout << "The string after removing the spaces: " << str;
    return 0;
}

/*
-> same program in python
string = input('Enter the string: ')
string = ''.join(string.split())
print('The string after removing the spaces: ', string)
*/