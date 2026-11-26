#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool total_hours(vector<int> nums, int mid, int hrs)
{
    int total = 0;
    for (auto it : nums)
    {
        total += (it + mid - 1) / mid;
    }
    return total <= hrs;
}

int kokoEatingBananas(vector<int> nums, int hrs)
{
    int n = nums.size();
    int low = 1, high = *max_element(nums.begin(), nums.end());
    int ans = high;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (total_hours(nums, mid, hrs) == true)
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

int main()
{
    vector<int> nums = {3, 6, 7, 11};
    int hrs = 8;

    cout << kokoEatingBananas(nums, hrs);

    return 0;
}