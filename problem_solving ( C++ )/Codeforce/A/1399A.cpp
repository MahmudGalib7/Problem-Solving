#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    bool ok = true;
    for(int i = 1; i < n; i++) {
        if(arr[i] - arr[i - 1] > 1) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "Yes" : "No") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
