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
    int n;
    cin >> n;

    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    for (int x : arr) {
        freq[x]++;
    }

    int needed_num = LLONG_MAX;
    int max_count = 0;

    for (auto &p : freq) {
        if (p.second > max_count || (p.second == max_count && p.first < needed_num)) {
            needed_num = p.first;
            max_count = p.second;
        }
    }
    int operations = 0;
    int cnt = max_count;
    
    while (cnt < n) {
        operations++;
        cnt = cnt * 2;
        if (cnt > n) cnt = n;
    }

    cout << operations << endl;
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