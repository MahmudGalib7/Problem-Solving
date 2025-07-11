#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; long long l, r, x;
    cin >> n >> l >> r >> x;

    vector<long long> c(n);
    for (auto &v : c) cin >> v;

    int ans = 0;

    for (int mask = 0; mask < (1 << n); ++mask) {
        int cnt = __builtin_popcount(mask);
        if (cnt < 2) continue;

        long long sum = 0, mn = 1e18, mx = 0;
        for (int i = 0; i < n; ++i)
            if (mask & (1 << i)) {
                sum += c[i];
                mn  = min(mn, c[i]);
                mx  = max(mx, c[i]);
            }
       if (sum >= l && sum <= r && mx - mn >= x) ans++;
    }

    cout << ans << '\n';
    return 0;
}
