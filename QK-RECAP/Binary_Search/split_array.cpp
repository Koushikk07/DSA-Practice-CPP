#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int SplitSum(vector<int> &nums, int mid, int k)
    {
        int sum = 0;
        int ck = 1;
        for (auto it : nums)
        {
            if (sum + it <= mid)
            {
                sum += it;
            }
            else
            {
                ck++;
                sum = it;
            }
        }

        return ck <= k;
    }

    int total_sum(vector<int> &nums)
    {
        int sum = 0;
        for (auto it : nums)
        {
            sum += it;
        }
        return sum;
    }
    int splitArray(vector<int> &nums, int k)
    {

        int low = *max_element(nums.begin(), nums.end()),
            high = total_sum(nums);
        int ans = high;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (SplitSum(nums, mid, k) == true)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {

                low = mid + 1;
            }
        }
        return ans;
    }
};