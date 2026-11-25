#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string frequencySort(string s)
    {

        unordered_map<char, int> mpp;

        for (int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
        }

        vector<pair<char, int>> v(mpp.begin(), mpp.end());

        sort(v.begin(), v.end(),
             [](pair<char, int> &a, pair<char, int> &b)
             {
                 return a.second > b.second;
             });

        string ans = "";

        for (auto it : v)
        {
            ans += string(it.second, it.first);
        }

        return ans;
    }
};

int main()
{
    string s = "tree";
    Solution obj;
    cout << obj.frequencySort(s);

    return 0;
}