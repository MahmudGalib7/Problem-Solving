#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int solve(int n) {
	vector<int> dp(n+1);

	dp[0] = 1;
	dp[1] = 1;

	for(int i = 2; i <= n; i++) {
		dp[i] = dp[i-1] + dp[i-2];
	}

	return dp[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}