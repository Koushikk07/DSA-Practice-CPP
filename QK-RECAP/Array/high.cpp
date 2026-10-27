#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Freq(vector<int> arr)
{
    int n = arr.size();

    unordered_map<int, int> mpp;

    for (auto it : arr)
    {
        mpp[it]++;
    }

    int maxi = 0;
    int ans = -1;
    int secHis = -1;
    for (auto it : mpp)
    {
        if (it.second > maxi)
        {
            maxi = it.second;
            ans = it.first;
        }
    }
    return ans;
}

int Low(vector<int> arr)
{
    int n = arr.size();

    unordered_map<int, int> mpp;

    for (auto it : arr)
    {
        mpp[it]++;
    }

    int low = INT_MAX;
    int ans = -1;

    for (auto it : mpp)
    {
        if (it.second < low)
        {
            low = it.second;

            ans = it.first;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 1, 2, 2, 2, 1, 5};
    int high = Freq(arr);
    int low = Low(arr);
    cout << high + low;
}