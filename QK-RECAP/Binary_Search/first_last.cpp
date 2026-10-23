#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int first_val(vector<int> arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int first = -1;
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
            first = mid;
            low = mid + 1;
        }
    }
    return first;
}

int last_val(vector<int> arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;

        else if (arr[mid] > target)
        {
            last = mid;
            high = mid - 1;
        }
        else
        {

            low = mid + 1;
        }
    }
    return last;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    cout << "Floor Value of given array: " << first_val(arr, 25) << endl;
    cout << "Ceil Value of given array: " << last_val(arr, 25) << endl;
    return -1;
}