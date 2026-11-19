#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> sum1Darr(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        ans.push_back(sum);
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};

    vector<int> newArr = sum1Darr(nums);

    for (auto it : newArr)
        cout << it << " ";
}