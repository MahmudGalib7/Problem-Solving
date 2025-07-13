/**
 * The above C++ code implements a dynamic programming solution to the 0/1 Knapsack problem to find the
 * maximum value that can be obtained within a given weight limit.
 * 
 * @param idx The `idx` parameter in the `solve` function represents the current index of the item
 * being considered in the dynamic programming solution for the knapsack problem. It is used to keep
 * track of which item we are currently evaluating for inclusion in the knapsack.
 * @param weights_left The `weights_left` parameter in the `solve` function represents the remaining
 * weight capacity of the knapsack at a particular recursive call. It decreases as items are added to
 * the knapsack during the recursive calls. The function tries to maximize the total value of items
 * that can be put into the
 * 
 * @return The program is returning the maximum value that can be achieved by selecting items within
 * the given weight limit W.
 * With this solution one can solve knapsack problems using dynamic programming which follows the rules of 
 * TOP DOWN Method
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int MAX_W = 1e5 + 5;
const int MAX_N = 105;

int weights[MAX_N];
ll vales[MAX_N];
ll dp[MAX_N][MAX_W];

ll solve(int idx, int weights_left) {
    if (idx < 0) return 0;
    if (weights_left == 0) return 0;
    if (dp[idx][weights_left] != -1) return dp[idx][weights_left];

    ll ans = solve(idx - 1, weights_left);
    if (weights_left - weights[idx] >= 0) {
        ans = max(ans, solve(idx - 1, weights_left - weights[idx]) + vales[idx]);
    }

    return dp[idx][weights_left] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(dp, -1, sizeof(dp));

    int N, W;
    cin >> N >> W;

    for (int i = 0; i < N; i++) {
        cin >> weights[i] >> vales[i];
    }

    cout << solve(N - 1, W) << endl;

    return 0;
}
