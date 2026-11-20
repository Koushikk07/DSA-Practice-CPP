#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxConsectiveOnes(vector<int> arr, int k)
{
    int zeros = 0, n = arr.size(), left = 0, right = 0, ans = 0;

    while (right < n)
    {
        if (arr[right] == 0)
            zeros++;

        if (zeros > k)
        {
            if (arr[left] == 0)
                zeros--;
            left++;
        }

        if (zeros <= k)
        {
            ans = max(ans, right - left + 1);
        }
        right++;
    }

    return ans;
}

int main()
{

    vector<int> arr = {1, 1, 1, 0, 1, 0, 0, 1, 1, 1};
    cout << "The Maximum consectives ones with k flips: " << maxConsectiveOnes(arr, 3);
}