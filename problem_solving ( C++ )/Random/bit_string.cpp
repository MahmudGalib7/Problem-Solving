#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();
    
    ll int N;
    cin >> N;
    ll ans = 0;
    for (int i = 0; i < N; ++i) ans = (ans * 2) % 1000000007;
    cout << ans;
    return 0;
}