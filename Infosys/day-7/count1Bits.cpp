#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    cout << " No of set bits in num :" << countSetBits(13);
}