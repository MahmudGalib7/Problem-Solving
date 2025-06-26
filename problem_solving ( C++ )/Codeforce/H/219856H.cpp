#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio();

    ll int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        if (a.find("101") != string::npos || a.find("010") != string::npos)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }
    return 0;
}
