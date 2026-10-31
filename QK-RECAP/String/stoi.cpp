#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int String2Int(string s)
{
    int n = s.size();
    int sign = 1;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-')
            sign = -1;

        if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
        {
            num = num * 10;
            num += s[i] - '0';
        }
    }
    return num * sign;
}

int main()
{
    cout << String2Int("1337c0d3");
}