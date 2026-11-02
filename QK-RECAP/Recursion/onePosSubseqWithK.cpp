#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool printAllSubsequences(int index, int s, int sum, vector<int> &data, vector<int> arr)
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
            return true;
        }
        return false;
    }
    s += arr[index];
    data.push_back(arr[index]);
    if (printAllSubsequences(index + 1, s, sum, data, arr) == true)
    {
        return true;
    }
    s -= arr[index];
    data.pop_back();
    if (printAllSubsequences(index + 1, s, sum, data, arr) == true)
    {
        return true;
    }

    return false;
}

int main()
{
    vector<int> ans;
    int s = 0;
    printAllSubsequences(0, s, 2, ans, {1, 2, 1});
}