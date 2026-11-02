#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printAllSubsequences(int index, int s, int sum, vector<int> &data, vector<int> arr)
{
    int n = arr.size();
    if (index == n)
    {
        if (sum == s)
        {
            cout << "{";
            for (auto it : data)
            {
                cout << it << " ";
            }
            cout << "}";
        }
        return;
    }
    s += arr[index];
    data.push_back(arr[index]);
    printAllSubsequences(index + 1, s, sum, data, arr);
    s -= arr[index];
    data.pop_back();
    printAllSubsequences(index + 1, s, sum, data, arr);
}

int main()
{
    vector<int> ans;
    int s = 0;
    printAllSubsequences(0, s, 2, ans, {1, 2, 1});
}