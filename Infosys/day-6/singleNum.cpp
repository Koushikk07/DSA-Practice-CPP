#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> nums)
{
    int x = 0;

    for (auto it : nums)
    {
        x ^= it;
    }
    return x != 0 ? x : -1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 4, 5, 5};

    cout << " The Single Number in the Array: " << singleNumber(nums);
}