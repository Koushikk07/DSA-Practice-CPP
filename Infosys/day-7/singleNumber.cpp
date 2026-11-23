#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int single_number(vector<int> nums)
{
    int n = nums.size();

    int xxor = 0;
    for (auto it : nums)
    {
        xxor ^= it;
    }

    return xxor != 0 ? xxor : -1;
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 42, 42};

    cout << " The single Number : " << single_number(arr);
}