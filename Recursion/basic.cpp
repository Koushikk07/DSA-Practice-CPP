#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printN(int n)
{
    if (n == 0)
        return;
    printN(n - 1);
    cout << n << endl;
}

void PrintNto1(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    PrintNto1(n - 1);
}

void PrintEvenAsc(int n)
{
    if (n == 0)
        return;
    PrintEvenAsc(n - 2);
    cout << n << endl;
}

void PrintOddasc(int n)
{
    if (n < 0)
        return;
    PrintOddasc(n - 2);
    cout << n + 1 << endl;
}

int Sum(int n)
{
    if (n == 0)
        return 0;
    return n + Sum(n - 1);
}
void Sum_Parms(int n, int sum)
{
    if (n < 1)
    {
        cout << sum;
        return;
    }
    Sum_Parms(n - 1, sum + n);
}

int Fib(int n)
{
    if (n <= 1)
        return n;
    return Fib(n - 1) + Fib(n - 2);
}
int main()
{

    // cout << Sum(10);
    // Sum_Parms(10, 0);

    cout << Fib(10);
}