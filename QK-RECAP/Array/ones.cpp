#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Max_ones(vector<int> &arr)
{
    int size = arr.size();
    int cnt = 0;
    int ans = 0;
    for (auto it : arr)
    {
        if (it == 1)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else if (it == 0)
        {
            cnt = 0;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {0, 1, 0, 1, 1, 1, 1, 0};
    cout << " Maximum Consecutive ones: " << Max_ones(arr);
}