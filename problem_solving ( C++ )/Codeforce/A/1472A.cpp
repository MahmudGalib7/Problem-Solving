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
    int a, b, x;
    cin >> a >> b >> x;
    int count = 1;
 
    if(a%2==0){
        while(a%2==0){
            count *= 2;
            a /= 2;
        }
    }
 
    if(b%2==0) {
        while(b%2==0){
            count *= 2;
            b /= 2;
        }
    } 
 
    if(count >= x){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
 
signed main() {
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    #endif
 
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int tc = 1;
    cin >> tc;
    while (tc--) test_case();
 
    return 0;
}