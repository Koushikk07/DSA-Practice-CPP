#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &nums, int target)
{
    int n = nums.size();

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return true;
        if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return false;
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 7, 8, 12, 45, 67, 78};
    cout << boolalpha;
    cout << binarySearch(nums, 7);
}