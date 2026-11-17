#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int size = s.size();
    int left = 0, right = size - 1;

    while (left <= right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;
    cout << boolalpha;
    cout << "Is given string is palindrome: ";
    cout << isPalindrome(str);
}