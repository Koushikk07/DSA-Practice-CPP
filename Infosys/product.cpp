#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> productSum(vector<int> nums)
{
    int n = nums.size();

    vector<int> ProdArr(n, 1);

    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
                prod *= nums[j];
        }
        ProdArr[i] = prod;
    }
    return ProdArr;
}

int main()
{
    vector<int> arr = {1, 2, 0, 4, 5};
    vector<int> newProd = productSum(arr);

    for (auto it : newProd)
        cout << it << " ";
}