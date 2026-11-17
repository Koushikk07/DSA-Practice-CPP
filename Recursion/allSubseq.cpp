#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printAllSubsequences(int index, vector<int> &data, vector<int> arr)
{
    int n = arr.size();
    if (index == n)
    {
        cout << '{';
        for (auto it : data)
        {
            cout << it << " ";
        }
        cout << '}' << endl;

        return;
    }

    data.push_back(arr[index]);
    printAllSubsequences(index + 1, data, arr);
    data.pop_back();
    printAllSubsequences(index + 1, data, arr);
}

int main()
{
    vector<int> ans;
    printAllSubsequences(0, ans, {3, 2, 1});
}