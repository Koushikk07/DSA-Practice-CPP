#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void _sort_colors(vector<int> &nums)
{
    int size = nums.size();

    int low = 0, mid = 0, high = size - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 0, 1, 0, 0, 1, 2, 0, 1, 2};

    _sort_colors(nums);

    for (auto it : nums)
    {
        cout << it << " ";
    }
    return -1;
}