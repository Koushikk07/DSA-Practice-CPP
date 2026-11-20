#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> nums)
{
    int n = nums.size();

    int leftSum = 0;
    int totalSum = 0;
    int rightSum = 0;
    for (auto it : nums)
        totalSum += it;

    for (int i = 0; i < n; i++)
    {
        rightSum += totalSum - leftSum - nums[i];

        if (rightSum == leftSum)
            return i;

        leftSum += nums[i];
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << "the pivot index : " << pivotIndex(nums);
}