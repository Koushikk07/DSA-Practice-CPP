#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> fibonacci(int n)
{

    vector<int> series;
    if (n == 0)
        return {0};
    series.push_back(0);
    series.push_back(1);

    for (int i = 2; i <= n; i++)
    {
        series.push_back(series[i - 1] + series[i - 2]);
    }
    return series;
}

int main()
{
    vector<int> ans = fibonacci(5);

    for (auto it : ans)
    {
        cout << it << " ";
    }
}