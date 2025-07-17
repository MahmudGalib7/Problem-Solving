#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    ll int four=0, seven=0;
    for(int i = 0; i < s.size(); i++) {
        if (s[i] == '4') {
            four++;
        } else if (s[i] == '7') {
            seven++;
        }
    }

    if(four == seven) cout << "Yes";
    else cout << "No";
    return 0;
}