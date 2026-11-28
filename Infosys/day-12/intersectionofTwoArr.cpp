#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionTwoArr(vector<int> arr1, vector<int> arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    vector<int> ans;

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
            i++;
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 7, 5, 78, 92, 4};
    vector<int> arr2 = {1, 7, 5, 92, 4, 7, 5, 2};

    vector<int> ans = intersectionTwoArr(arr1, arr2);

    for (auto it : ans)
    {
        cout << it << " ";
    }
}