#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int BestTimeBandS(vector<int> nums)
{
    int n = nums.size();
    int cost = nums[0];
    int profit = 0;
    int maxi = 0;
    for (int i = 1; i < n; i++)
    {
        profit = nums[i] - cost;
        maxi = max(maxi, profit);
        cost = min(cost, nums[i]);
    }
    return maxi;
}

int main()
{
    vector<int> nums = {7, 1, 5, 3, 6, 4};

    cout << " the maximum profit in given sells: " << BestTimeBandS(nums);
}