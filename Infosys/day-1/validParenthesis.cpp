#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int size = s.size();
    stack<char> st;
    for (auto ch : s)
    {
        if (ch == '(' || ch == '[' || ch == '{')
        {
            st.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            char temp = st.top();
            st.pop();
            if ((temp == '(' && ch == ')') || (temp == '[' && ch == ']') || (temp == '{' && ch == '}'))
            {
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty() ? true : false;
}

int main()
{

    string par;
    cout << "Enter the parentheses String: ";
    cin >> par;
    cout << boolalpha;
    cout << isValid(par);
}