#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();
    
    ll int T, N, I;
    cin >> T;
    while(T--) {
        cin >> N >> I;
        cout << ((N >> I) & 1) << endl;
    }
    return 0;
}