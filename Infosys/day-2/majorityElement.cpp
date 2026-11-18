#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int majorityElement(int nums[], int n)
{
    int element = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            element = nums[i];
            cnt++;
        }
        else if (element == nums[i])
            cnt++;
        else
            cnt--;
    }

    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (element == nums[i])
            cnt1++;
    }

    return (n / 2) < cnt1 ? element : -1;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int nums[n];
    cout << "Enter the nums exactly " << n << " size: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int me = majorityElement(nums, n);
    cout << "Majority Element is given array : " << me;
}