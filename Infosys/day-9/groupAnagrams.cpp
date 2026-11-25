#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagram(vector<string> strs)

{
    vector<vector<string>> s;
    unordered_map<string, vector<string>> mpp;

    for (int i = 0; i < strs.size(); i++)
    {
        string str = strs[i];
        sort(str.begin(), str.end());
        mpp[str].push_back(strs[i]);
    }

    for (auto it : mpp)
    {
        s.push_back(it.second);
    }
    return s;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> ans = groupAnagram(strs);

    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}