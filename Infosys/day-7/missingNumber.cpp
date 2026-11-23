#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int missing_number(vector<int> arr)
{
    int n = arr.size();

    int total_value = (n * (n + 1)) / 2;
    int arr_sum = 0;
    for (auto it : arr)
    {
        arr_sum += it;
    }
    return total_value - arr_sum;
}

int main()
{
    vector<int> ar = {0, 1, 2, 4};
    cout << ar.size();
    cout << " The missing Number : " << missing_number(ar);
}