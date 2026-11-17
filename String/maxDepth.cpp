#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxDepth(string s)
{
    int cnt = 0;
    int maxCnt = 0;
    for (char c : s)
    {
        if (c == '(')
        {
            cnt++;
            maxCnt = max(cnt, maxCnt);
        }
        else if (c == ')')
        {
            cnt--;
        }
    }
    return maxCnt;
}

int main()
{
    cout << " Max Depth of the Parentheses: " << maxDepth("(1+(2*3)+((8)/4))+1");
}