#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> three_sum(vector<int> arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0)
                return {arr[i], arr[left], arr[right]};

            else if (sum > 0)
                right--;
            else
                left++;
        }
    }
    return {-1, -1, -1};
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, 3};
    vector<int> ans = three_sum(nums);

    for (int i : ans)
    {
        cout << i << " ";
    }
}