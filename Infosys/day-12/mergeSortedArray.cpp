#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> mergeArr(vector<int> nums1, vector<int> nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> arr;

    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (nums1[i] < nums2[j])
        {
            arr.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            arr.push_back(nums2[j]);
            j++;
        }
        else
        {
            arr.push_back(nums1[i]);
            arr.push_back(nums2[j]);
            i++;
            j++;
        }
    }

    while (i < n1)
    {
        arr.push_back(nums1[i]);
        i++;
    }

    while (j < n2)
    {
        arr.push_back(nums2[j]);
        j++;
    }

    return arr;
}

int main()
{
    vector<int> nums1 = {3, 5, 7, 9, 11};
    vector<int> nums2 = {1, 2, 3, 5, 6, 13};

    vector<int> ans = mergeArr(nums1, nums2);

    for (int i : ans)
    {
        cout << i << " ";
    }
}