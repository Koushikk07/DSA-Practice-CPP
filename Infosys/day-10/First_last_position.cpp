#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int first_position(vector<int> nums, int target)
{
    int n = nums.size();
    int pos = -1;

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            pos = mid;
            high = mid - 1;
        }

        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return pos;
}

int last_position(vector<int> nums, int target)
{
    int n = nums.size();
    int pos = -1;

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            pos = mid;
            low = mid + 1;
        }

        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return pos;
}

pair<int, int> position(vector<int> arr, int target)
{
    int first = first_position(arr, target);
    int last = last_position(arr, target);

    if (first == -1)
        return {-1, -1};

    return {first, last};
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 5, 5, 5, 5, 6, 6, 7, 8, 9};

    pair<int, int> pos = position(nums, 5);

    cout << "Start at : " << pos.first << endl;
    cout << "End at : " << pos.second << endl;
}