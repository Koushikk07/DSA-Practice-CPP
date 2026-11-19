#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* int f(int n)   -- recursive approach
{
    if (n <= 1)
        return n;

    return f(n - 1) + f(n - 2);
}
 */

/* int f(int n, vector<int> &dp)    -- Memoization
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}
int main()
{
    int n = 10;
    vector<int> dp(n + 1, -1);
    cout << f(n, dp);
} */

int f(int n, vector<int> &dp)
{
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main()
{
    int n = 10;
    vector<int> dp(n + 1, -1);
    cout << f(n, dp);
}