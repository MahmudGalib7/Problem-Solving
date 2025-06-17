#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    string rev = s;
    reverse(s.begin(), s.end());
    if (rev == s)
    {
        cout << s << endl;
        cout << "YES" << endl;
    }
    else
    {
        if (s[0] != '0')
        {
            cout << s << endl;
        }
        else
        {
            cout << s.substr(1) << endl;
        }
        cout << "NO" << endl;
    }
    return 0;
}