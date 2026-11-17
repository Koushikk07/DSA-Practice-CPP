#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printAllSubsequences(int index, int s, int &cnt, int sum, vector<int> &data, vector<int> arr)
{
    int n = arr.size();
    if (index == n)
    {
        if (sum == s)
        {
            cnt++;
        }
        return;
    }
    s += arr[index];
    data.push_back(arr[index]);
    printAllSubsequences(index + 1, s, cnt, sum, data, arr);
    s -= arr[index];
    data.pop_back();
    printAllSubsequences(index + 1, s, cnt, sum, data, arr);
}

int main()
{
    vector<int> ans;
    int s = 0;
    int cnt = 0;
    printAllSubsequences(0, s, cnt, 2, ans, {1, 2, 1});
    cout << cnt;
}