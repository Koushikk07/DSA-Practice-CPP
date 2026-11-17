#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int second_largest(int arr[], int n)
{
    int lar = INT_MIN;
    int sec_lar = lar;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lar)
        {
            sec_lar = lar;
            lar = arr[i];
        }
        else if (arr[i] > sec_lar && arr[i] < lar)
        {
            sec_lar = arr[i];
        }
    }
    return sec_lar;
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

    cout << "The Second Largest Element in given Array: " << second_largest(arr, n);
}