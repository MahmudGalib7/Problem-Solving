#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e5+10;
int dp[N];


// TOP DOWN
int topDownfib(int n) {
	if(n<=1) return n;
	if(dp[n] != -1) return dp[n];
	return dp[n] = topDownfib(n-1)+topDownfib(n-2);
}

// BOTTOM DOWN
int bottomDownfib(int n) {
	dp[0] = 0;
	dp[1] = 1;
	for(int i =2; i <= n; i++) {
		dp[i] = dp[i-1] + dp[i-2];
	}

	return dp[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << topDownfib(n) << endl;
    cout << bottomDownfib(n) << endl;

    return 0;
}