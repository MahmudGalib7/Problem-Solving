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

    string a, b;
    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;

    char a_v = a[0];
    char b_v = b[0];

    a[0] = b_v;
    b[0] = a_v;

    cout << a << " " << b;
    return 0;
}