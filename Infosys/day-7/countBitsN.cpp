#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int cntBits(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}
vector<int> countBits(int n)
{

    vector<int> ans;

    for (int i = 0; i <= n; i++)
    {
        ans.push_back(cntBits(i));
    }
    return ans;
}

int main()
{
    vector<int> newArr = countBits(5);

    for (auto it : newArr)
    {
        cout << it << " ";
    }
}