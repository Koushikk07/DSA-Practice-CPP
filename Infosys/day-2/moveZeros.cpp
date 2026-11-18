#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void moveZeros(vector<int> &nums)
{
    int size = nums.size();
    int zero_idx = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[zero_idx], nums[i]);
            zero_idx++;
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 0, 5, 6, 0, 1, 2, 0};
    moveZeros(nums);

    for (auto it : nums)
    {
        cout << it << " ";
    }
}