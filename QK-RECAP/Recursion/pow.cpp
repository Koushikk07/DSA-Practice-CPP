#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double p(double x, int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 1 / p(x, -n);
    return x * p(x, n - 1);
}

int main()
{
    double ans = p(2.0000, -2);
    cout << fixed << setprecision(4) << ans;
}