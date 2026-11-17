#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_Valid_Anagram(string s, string t)
{
    unordered_map<char, int> mpp;

    for (char c : s)
    {
        mpp[c]++;
    }
    for (char c : t)
    {
        if (mpp[c] == 1)
        {
            mpp.erase(c);
        }
        else
        {
            mpp[c]--;
        }
    }

    return mpp.empty() ? true : false;
}

int main()
{
    string str1;
    cout << "Enter the String 1: ";
    cin >> str1;
    string str2;
    cout << "Enter the String 2: ";
    cin >> str2;
    cout << boolalpha;
    cout << "Is given strings are Anagram: ";
    cout << is_Valid_Anagram(str1, str2);
}