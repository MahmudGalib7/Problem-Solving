#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int n;
    cin >> n;
    ll int ans = 0;
    while(n--){
        string s;
        cin >> s;
        for(int i =0; i < 1; i++){
            if(s[i+1] == '+' & s[i+2] == '+') {
                ans += 1;
            } else if (s[i] == '+' & s[i+1] == '+') {
                ans += 1;
            } else {
                ans -= 1;
            }
        }
    }

    cout << ans;
    return 0;
}