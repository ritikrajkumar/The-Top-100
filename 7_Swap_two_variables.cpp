#include <bits/stdc++.h>
using namespace std;

int main()
{
    int var1, var2, temp;
    cout << "Enter the two variables separated by a space: ";
    cin >> var1 >> var2;
    temp = var1;
    var1 = var2;
    var2 = temp;
    cout << "After swapping the variables: " << var1 << " " << var2;
    return 0;
}