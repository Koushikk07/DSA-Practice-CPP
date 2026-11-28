#include <bits/stdc++.h>
#include <iostream>
using namespace std;

pair<int, int> two_sum(vector<int> nums, int target)
{
    int n = nums.size();

    int left = 0, right = n - 1;

    while (left < right)
    {
        int sum = nums[left] + nums[right];

        if (sum == target)
            return {left, right};
        else if (sum > target)
        {
            right--;
        }
        else
            left++;
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr = {2, 7, 12, 21, 111};
    pair<int, int> ans = two_sum(arr, 9);

    cout << "[" << ans.first << "," << ans.second << "]";
}