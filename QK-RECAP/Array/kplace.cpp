#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveKplaces(vector<int> &arr, int k)
{
    int size = arr.size();

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    moveKplaces(arr, 2);

    for (auto it : arr)
    {
        cout << it << " ";
    }
}