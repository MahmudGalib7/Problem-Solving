#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e5+10;
int h[N];
int dp[N];

int solve(int i) {
	if(i == 0) return i;
	if (dp[i] != -1) return dp[i];
	int cost = INT_MAX;

	// 1 way
	cost = min(cost, solve(i-1) + abs(h[i] - h[i-1]));
	// 2 way
	if (i > 1) cost = min(cost, solve(i-2) + abs(h[i] - h[i-2]));
	
	return dp[i] = cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for(int i =0; i < n; i++) {
    	cin >> h[i];
    }

    cout << solve(n-1);
    return 0;
}