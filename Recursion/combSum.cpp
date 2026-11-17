#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void combinationSum(int index, int target, vector<int> nums, vector<int> &temp, vector<vector<int>> &ans)
{
    if (index == nums.size())
    {
        if (target == 0)
        {
            ans.push_back(temp);
        }
        return;
    }

    if (nums[index] <= target)
    {
        temp.push_back(nums[index]);
        combinationSum(index, target - nums[index], nums, temp, ans);
        temp.pop_back();
    }
    combinationSum(index + 1, target, nums, temp, ans);
}

int main()
{
    vector<int> temp;
    vector<vector<int>> arr;
    combinationSum(0, 7, {2, 3, 6, 7}, temp, arr);

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