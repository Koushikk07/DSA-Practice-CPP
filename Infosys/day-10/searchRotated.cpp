#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int SearchinRotated(vector<int> nums, int target)
{
    int n = nums.size();

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[low] <= nums[mid])
        {
            // Left Rotated Array

            if (nums[low] <= target && nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            // Right Rotated Array

            if (nums[mid] <= target && nums[high] > target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{

    vector<int> nums = {4, 5, 6, 7, 1, 2, 3};

    cout << "Index at : " << SearchinRotated(nums, 7);
}