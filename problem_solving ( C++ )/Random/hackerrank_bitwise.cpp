#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();

    int N, K;
    if (!(cin >> N >> K)) return 0;

    int best_and = 0, best_or = 0, best_xor = 0;

    for (int a = 1; a <= N; ++a) {
        for (int b = a + 1; b <= N; ++b) {
            int val = a & b;
            if (val < K) best_and = max(best_and, val);

            val = a | b;
            if (val < K) best_or = max(best_or, val);

            val = a ^ b;
            if (val < K) best_xor = max(best_xor, val);
        }
    }

    cout << best_and << ' ' << best_or << ' ' << best_xor << '\n';
    return 0;
}
