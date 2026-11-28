#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(int low, int high, int arr[])
{
    while (low <= high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void rotateArray(int arr[], int n)
{
    rotate(0, n - 1, arr);
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
    rotateArray(arr, n);
    cout << "After Rotating the Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}