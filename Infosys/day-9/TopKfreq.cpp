#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> TopKfreqEle(vector<int> arr, int k)
{
    int n = arr.size();
    vector<int> ans;
    unordered_map<int, int> mpp;

    for (auto it : arr)
    {
        mpp[it]++;
    }

    vector<pair<int, int>> vec;

    for (auto it : mpp)
    {
        vec.push_back({it.first, it.second});
    }

    sort(vec.rbegin(), vec.rend());

    for (int i = 0; i < k; i++)
    {
        ans.push_back(vec[i].second);
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 3};
    vector<int> ans = TopKfreqEle(arr, 2);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}