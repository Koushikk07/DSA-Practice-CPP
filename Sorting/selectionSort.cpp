#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        int min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main()
{
    vector<int> arr = {5, 1, 12, 6, 71, 8};

    Selection_Sort(arr);

    for (auto num : arr)
    {
        cout << num << " ";
    }
}