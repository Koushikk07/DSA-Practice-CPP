#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseStr(string &s)
{
    int low = 0, high = s.size() - 1;
    while (low <= high)
    {
        swap(s[low], s[high]);
        low++;
        high--;
    }
}

int main()
{
    string str;
    cout << "Enter the string: ";
    // cin >> str;
    getline(cin, str);

    reverseStr(str);
    cout << "after Reversing the string: " << str;
}