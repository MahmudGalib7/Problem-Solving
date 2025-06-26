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

    string s;
    cin >> s;

    map<char, int> w_n_list;

    for (char c : s)
    {
        w_n_list[c]++;
    }

    for (auto &p : w_n_list)
    {
        cout << p.first << " : " << p.second << endl;
    }

    return 0;
}
