#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<char, int> ans;
    string s;
    cin >> s;
    for (char c : s)
    {
        ans[c]++;
    }
    ll int sum = 0;
    for (auto &p : ans)
    {
        sum++;
    }

    if(sum % 2 == 0)cout << "CHAT WITH HER!" << endl;
    else cout <<"IGNORE HIM!" << endl;
    return 0;
}