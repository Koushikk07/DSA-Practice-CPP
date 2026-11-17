#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void combinationSum(int index, int target, vector<int> nums, vector<int> temp, vector<vector<int>> &ans)
{
    if (index == nums.size())
    {
        if (target == 0)
        {
            ans.push_back(temp);
        }
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        if (i > index && nums[i] == nums[i - 1])
            continue;
        if (nums[i] > target)
            break;

        temp.push_back(nums[i]);
        combinationSum(i + 1, target - nums[i], nums, temp, ans);
        temp.pop_back();
    }
}

int main()
{
    vector<int> temp;
    vector<vector<int>> arr;
    vector<int> nums = {1, 1, 2, 5, 6, 7, 10};
    combinationSum(0, 8, nums, temp, arr);

    for (auto it : arr)
    {
        cout << "{";
        for (auto e : it)
        {
            cout << e << " ";
        }
        cout << "}" << endl;
    }
}