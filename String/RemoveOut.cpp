#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s)
{
    string ans = "";

    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
            cnt--;

        if (cnt != 0)
            ans += s[i];
        if (s[i] == '(')
            cnt++;
    }
    return ans;
}

int main()
{
    cout << removeOuterParentheses("((()))");
}