#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int beautySum(string s)
{
    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;
    unordered_map<char, int> mpp;
    for (char c : s)
    {
        mpp[c]++;
    }

    for (auto it : mpp)
    {
        if (it.second < minFreq)
        {
            minFreq = it.second;
        }
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
        }
    }
    return maxFreq - minFreq;
}
int main()
{
    cout << "Sum of beauty of all subStrings: " << beautySum("xyxxxx");
}