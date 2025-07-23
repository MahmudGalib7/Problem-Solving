#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second

using vi = vector<int>;
using pii = pair<int,int>;

const int MOD = 1e9 + 7;
const int INF = 1e18;

void test_case() {
    int n; cin >> n;
    int sz = 26;
    string mins = "zzz", cur;
    for(int i = 0; i < sz; i++){
        for(int j = 0; j < sz; j++){
            for(int k = 0; k < sz; k++){
                if(i + j + k + 3 == n){
                    cur += char(i + 'a');
                    cur += char(j + 'a');
                    cur += char(k + 'a');
                    mins = min(cur, mins);
                }
            }
        }
    }
    cout << mins << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    while (tc--) test_case();

    return 0;
}