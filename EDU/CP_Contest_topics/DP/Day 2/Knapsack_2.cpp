#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int MAX_NUM = 2e5 + 10;
int weights[105], values[105];
ll dp[105][100005];

ll solve(int idx, int value_left)
{
    if (idx == 0) {
        if (value_left == 0) return 0;
        if (value_left <= values[0]) return weights[0];
        return 1e15;
    }
    if (dp[idx][value_left] != -1)
        return dp[idx][value_left];

    ll ans = solve(idx - 1, value_left);
    if (value_left - values[idx] >= 0) {
        ans = min(ans, solve(idx - 1, value_left - values[idx]) + weights[idx]);
    }
    return dp[idx][value_left] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, W;
    cin >> N >> W;
    for (int i = 0; i < N; ++i) {
        cin >> weights[i] >> values[i];
    }
    for (int i = 0; i < 105; ++i)
        for (int j = 0; j < 100005; ++j)
            dp[i][j] = -1;
    for (int i = 1e5; i >= 0; i--) {
        if (solve(N - 1, i) <= W) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}