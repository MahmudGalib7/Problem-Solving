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
    int a, b; cin >> a >> b;
    int c_w = 0; 
    int s_l = 0;
    if (a >= b) c_w = b;
    else c_w = a;
    
    s_l = abs(a-b)/2;
    
    cout << c_w << " " << s_l << endl;
}

signed main() {
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    while (tc--) test_case();

    return 0;
}