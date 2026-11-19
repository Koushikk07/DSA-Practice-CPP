#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subarraySumEqualK(vector<int> nums, int k)
{
    int n = nums.size();

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum == k)
                count++;
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {1, 2, 4, 23, 45, 12, 1, 1, 1, 2, 2, 5, 4};
    cout << "The Sub array sum equals K : " << subarraySumEqualK(nums, 5);
}