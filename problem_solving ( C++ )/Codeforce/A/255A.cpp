#include <bits/stdc++.h>
using namespace std;

// ---------- Type aliases ----------
#define int long long
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second

using vi = vector<int>;
using pii = pair<int,int>;

// ---------- Constants ----------
const int MOD = 1e9 + 7;
const int INF = 1e18;

// ---------- Debugging ----------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

// ---------- Fast I/O ----------
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

// ---------- Math utilities ----------
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

int power_mod(int a, int b, int m = MOD) {
    int res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

inline int add_mod(int a, int b, int m = MOD) { return (a + b) % m; }
inline int sub_mod(int a, int b, int m = MOD) { return (a - b + m) % m; }
inline int mul_mod(int a, int b, int m = MOD) { return (a * b) % m; }

int ceil_div(int a, int b) { return (a + b - 1) / b; }

// ---------- Bit tricks ----------
int count_bits(int x) { return __builtin_popcountll(x); }
bool check_bit(int x, int pos) { return (x >> pos) & 1; }
int set_bit(int x, int pos) { return x | (1LL << pos); }

// ---------- Vector helpers ----------
void read_vec(vi &v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];
}
void print_vec(const vi &v) {
    for (auto &x : v) cout << x << ' ';
    cout << endl;
}

// ---------- Directions (Grid problems) ----------
// 4-directional (up, down, left, right)
int dx4[4] = {1, -1, 0, 0};
int dy4[4] = {0, 0, 1, -1};

// 8-directional (includes diagonals)
int dx8[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy8[8] = {0, 0, 1, -1, 1, -1, 1, -1};

// ---------- Solve per test case ----------
void test_case() {
    vi v;
    int n;
    cin >> n;
    read_vec(v, n);
    int chest=0, biseps=0, back=0;
    for(int i = 0; i < n; i+=3) {
        chest += v[i];
        if(i <= n-2 && i+1 < n)
            biseps += v[i+1];
        if(i <= n-1 && i+2 < n)
            back += v[i+2];
    }
    cout << (chest > biseps && chest > back ? "chest" : (biseps > back ? "biceps" : "back")) << endl;
}

signed main() {
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    #endif

    fast_io();

    int tc = 1;
    // cin >> tc;
    while (tc--) test_case();

    return 0;
}