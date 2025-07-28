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
    int n, k;
    cin >> n >> k;
    vi arr(n);
    for(int i = 0; i < n;i ++){
        cin >> arr[i];
    }

    int l = 0, r = n-1;
    while(l <= r){
        int mid = (l + (r-l) / 2);
        if(arr[mid] >= k) {
            cout << "Yes" << endl;
            cout << "Index: " << mid << endl;
            r = mid - 1;
            return;
        } else {
            l = mid+1;
        } 
    }
}

signed main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    while (tc--) test_case();

    return 0;
}