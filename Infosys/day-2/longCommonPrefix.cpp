#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string longest_common_prefix(string strs[], int n)
{
    int length = strs[0].size();
    int l = 0;
    string ans = "";
    while (l < length)
    {
        if (strs[0][l] == strs[n - 1][l])
            ans += strs[0][l];
        l++;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of string of array : ";
    cin >> n;
    string strs[n];
    cout << "Enter the strings exactly " << n << " size: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }
    cout << "Longest Common Prefix : " << longest_common_prefix(strs, n);
}