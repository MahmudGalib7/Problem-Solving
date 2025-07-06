#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();
    
    ll int L, R;
    cin >> L >> R;

    ll int max_xor = 0;
    ll int val = 0;
    for(int i = L; i <= R; i++) {
        for (int j = i; j <= R; j++) {
            val = i ^ j;
            max_xor = max(max_xor, val);
        }
    }

    cout << max_xor;
    return 0;
}