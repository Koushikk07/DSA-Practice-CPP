#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minSize(vector<int> arr, int sum)
{
    int left = 0, right = 0;
    int n = arr.size();
    int temp = 0;
    int ans = n - 1;

    while (right < n)
    {

        temp += arr[right];

        while (temp >= sum)
        {
            ans = min(ans, right - left + 1);
            temp -= arr[left];
            left++;
        }
        right++;
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    cout << "The minimum size sub array sum : " << minSize(arr, 7);
}