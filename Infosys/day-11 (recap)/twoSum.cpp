#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool twoSum(int arr[], int n, int target)
{
    int i = 0, j = n - 1;

    std::sort(arr, arr + n - 1);

    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == target)
            return true;

        if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}

int main()
{

    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array values exactly " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;
    cout << boolalpha << endl;
    cout << "Is Target found in the array : ";
    cout << twoSum(arr, n, target);
    return 0;
}