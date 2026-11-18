#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string largestNumber(vector<string> strs)
{
    string str;
    sort(strs.begin(), strs.end(), [](const string &a, const string &b)
         { return a + b > b + a; });

    for (auto it : strs)
    {
        str += it;
    }

    if (str[0] == '0')
        return "0";

    return str;
}

int main()
{
    int n;
    cin >> n;

    vector<string> strs(n);

    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }

    string ans = largestNumber(strs);

    cout << ans << endl;

    return 0;
}