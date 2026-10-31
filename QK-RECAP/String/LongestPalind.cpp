#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string og = s;
    reverse(s.begin(), s.end());
    return og == s;
}
string longestPalindrome(string s)
{
    int i = 0, j = s.size() - 1;
    while (i <= j)
    {
        if (isPalindrome(s.substr(i, j)))
        {
            return s.substr(i, j);
        }
        else
        {
            i++;
            j--;
        }
    }
    return "";
}

int main()
{
    cout << longestPalindrome("abbdd");
}