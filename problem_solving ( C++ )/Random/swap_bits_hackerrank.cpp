#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        unsigned int n;
        cin >> n;
        unsigned int res = ((n & 0xAAAAAAAA) >> 1) | ((n & 0x55555555) << 1);
        cout << res << '\n';
    }
    return 0;
}
