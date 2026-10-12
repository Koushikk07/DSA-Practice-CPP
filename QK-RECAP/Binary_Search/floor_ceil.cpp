#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int floor_val(vector<int> arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int floor = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;

        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            floor = mid;
            low = mid + 1;
        }
    }
    return arr[floor];
}

int ceil_val(vector<int> arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ceil = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;

        else if (arr[mid] > target)
        {
            ceil = mid;
            high = mid - 1;
        }
        else
        {

            low = mid + 1;
        }
    }
    return arr[ceil];
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    cout << "Floor Value of given array: " << floor_val(arr, 25) << endl;
    cout << "Ceil Value of given array: " << ceil_val(arr, 25) << endl;
    return -1;
}