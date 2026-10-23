#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {5, 1, 12, 6, 71, 8};

    bubble_sort(arr);

    for (auto num : arr)
    {
        cout << num << " ";
    }
}