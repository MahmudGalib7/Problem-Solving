#include <bits/stdc++.h>
using namespace std;

bool is_k_good(const string &s, int k) {
    vector<bool> has(10, false);
    for (char c : s)
        has[c - '0'] = true;

    for (int i = 0; i <= k; ++i)
        if (!has[i])
            return false;

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int count = 0;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (is_k_good(s, k))
            count++;
    }

    cout << count << '\n';
    return 0;
}