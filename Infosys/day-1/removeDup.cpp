#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int idx = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[idx] != arr[i])
        {
            idx = idx + 1;
            arr[idx] = arr[i];
        }
    }
    return idx + 1;
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
    cout << "Removed Duplicates (size - return {0 to idx}) :";
    cout << removeDuplicates(arr, n);
}