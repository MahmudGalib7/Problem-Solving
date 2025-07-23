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
  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    if (c == 1) {
      cnt1++;
    } else {
      cnt2++;
    }
  }
  if ((cnt1 + 2 * cnt2) % 2 != 0) {
    cout << "NO\n";
  } else {
    int sum = (cnt1 + 2 * cnt2) / 2;
    if (sum % 2 == 0 || (sum % 2 == 1 && cnt1 != 0)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
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