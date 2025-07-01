#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int countDistinctPrimeDivisors(int n) {
    int count = 0;
    if (n % 2 == 0) {
        count++;
        while (n % 2 == 0)
            n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            count++;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        count++;
    return count;
}

int main() {
    fastio();
    int l ,r;
    cin >> l >> r;
    int ans = 0;
    for (int i = l; i < r; i++) {
        if (countDistinctPrimeDivisors(i) == 2)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}
