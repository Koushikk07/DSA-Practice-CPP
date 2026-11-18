#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumofEvenOdd(vector<int> nums)
{
    int even = 0;
    int odd = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0)
            even += nums[i];
        else
            odd += nums[i];
    }
    return odd - even;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 6, 7};
    int ans = sumofEvenOdd(nums);
    cout << "Sum of odd index minus even index: " << ans;
}
