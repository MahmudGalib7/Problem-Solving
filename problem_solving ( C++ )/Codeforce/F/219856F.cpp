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
        string s;
        cin >> s;
        ll int n = s.size();
        if (n > 10)
        {
            cout << s[0] << (n - 2) << s[n - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}