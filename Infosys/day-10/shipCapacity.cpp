#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int capacity(vector<int> nums, int mid)
{
    int days = 1;
    int cap = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if ((cap + nums[i]) <= mid)
        {
            cap += nums[i];
        }
        else
        {
            days += 1;
            cap = nums[i];
        }
    }
    return days;
}

int ShipPackages(vector<int> packages, int days)
{
    int n = packages.size();

    int low = *max_element(packages.begin(), packages.end());
    int high = accumulate(packages.begin(), packages.end(), 0);
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        int totaldays = capacity(packages, mid);

        if (totaldays <= days)
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
    vector<int> packages = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << ShipPackages(packages, 5);
}