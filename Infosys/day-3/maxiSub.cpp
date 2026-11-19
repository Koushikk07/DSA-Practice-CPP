#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maximum_subarray(vector<int> nums)
{
    int maxi = 0;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxi = max(maxi, sum);
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}

int main()
{
    vector<int> arr = {-1, 3, 5, 7, 21, -34, 44, -12};

    cout << "The Maximum Sub Array: " << maximum_subarray(arr);
}