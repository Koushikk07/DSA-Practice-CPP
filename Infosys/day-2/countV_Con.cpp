#include <iostream>
#include <bits/stdc++.h>
using namespace std;

pair<int, int> count_vowels_consonants(string str)
{
    int vow = 0;
    int con = 0;

    for (auto it : str)
    {
        switch (it)
        {
        case 'a':
            vow++;
            break;
        case 'e':
            vow++;
            break;

        case 'i':
            vow++;
            break;

        case 'o':
            vow++;
            break;

        case 'u':
            vow++;
            break;

        default:
            con++;
        }
    }
    return {vow, con};
}

int main()
{
    string str = "koushik";
    pair<int, int> total_cnt = count_vowels_consonants(str);
    cout << "Total vowels in " << str << " : " << total_cnt.first << endl;
    cout << "Total consonants in " << str << " : " << total_cnt.second;
}