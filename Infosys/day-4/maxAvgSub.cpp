#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double maxiAvgSub(vector<int> &arr, int k)
{
    int sum = 0;
    double maxi = 0;
    int n = arr.size();
    int left = 0, right = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[right];
        right++;
    }
    maxi = (double)(sum / k);

    while (right < n)
    {
        sum -= arr[left];
        sum += arr[right];
        maxi = max(maxi, ((double)sum / (double)k));
        left++;
        right++;
    }
    return maxi;
}

int main()
{

    vector<int> arr = {1, 12, -5, -6, 50, 3};

    cout << " The maximum Average Subarray : " << maxiAvgSub(arr, 4);
}