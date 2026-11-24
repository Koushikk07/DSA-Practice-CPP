#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> NGE(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= nums[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            ans[i] = st.top();
        }
        st.push(nums[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = NGE({1, 2, 3, 3, 6, 1, 2});

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}