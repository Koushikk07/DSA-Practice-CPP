#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int balance = 0;
    for (char c : s)
    {
        if (c == '(')
            ++balance;
        else
            --balance;

        if (balance < 0)
            return false;
    }
    return balance == 0;
}
void generateParenthese(string &current, int n, vector<string> &result)
{
    if (current.size() == (2 * n))
    {
        if (isValid(current))
        {
            result.push_back(current);
        }
        return;
    }
    current.push_back('(');
    generateParenthese(current, n, result);
    current.pop_back();
    current.push_back(')');
    generateParenthese(current, n, result);
    current.pop_back();
}

vector<string> genPren(int n)
{
    vector<string> result;
    string current;
    generateParenthese(current, n, result);
    return result;
}

int main()
{
    vector<string> ans = genPren(3);

    for (auto it : ans)
    {
        cout << it << endl;
    }
    cout << endl;
}