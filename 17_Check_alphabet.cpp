#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    // you may also check the alphabet using the ascii values of characters like this:
    // if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        cout << "The given character is an alphabet.";
    }
    else
    {
        cout << "The given character is not an alphabet.";
    }
    return 0;
}