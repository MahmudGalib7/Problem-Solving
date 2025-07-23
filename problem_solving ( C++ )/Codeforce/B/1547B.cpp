#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    vector<bool> freq(26, false);
    for (char c : s) freq[c - 'a'] = true;

    for (int i = 0; i < n; i++) {
        if (!freq[i]) {
            cout << "NO" << endl;
            return;
        }
    }

    int pos = s.find('a');
    int l = pos, r = pos;
    char expected = 'b';

    for (int i = 1; i < n; i++) {
        if (l > 0 && s[l - 1] == expected) {
            l--;
        } else if (r + 1 < n && s[r + 1] == expected) {
            r++;
        } else {
            cout << "NO" << endl;
            return;
        }
        expected++;
    }
    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
