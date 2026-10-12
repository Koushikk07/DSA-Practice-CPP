#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int upper_Bound(vector<int> arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ind = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid + 1;
        else if (arr[mid] > target)
        {
            ind = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ind;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    cout << "Upper Bound :" << upper_Bound(arr, 8);
    return -1;
}