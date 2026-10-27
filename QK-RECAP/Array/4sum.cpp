#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> foursum(vector<int> arr)
{
    int n = arr.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int m = i + 1; m < n; m++)
        {

            int j = m + 1;
            int k = n - 1;
            while (j < k && j < n)
            {
                int sum = arr[i] + arr[j] + arr[k] + arr[m];
                if (sum == 0)
                {
                    ans.push_back({arr[i], arr[m], arr[j], arr[k]});
                    j++;
                    k--;
                }
                else if (sum > 0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> ar = {1, -1, 0, 2, -3, 1, 5, 3, 2, 6};
    vector<vector<int>> arr = foursum(ar);
    cout << "{";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "{";
        for (int j = 0; j < arr[i].size(); j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << "},";
    }
    cout << "}";
}