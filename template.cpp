#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

static const ll MOD = 1000000007LL;
static const ll INF = (1LL << 62);

template <class T>
bool chmax(T &a, const T &b)
{
    if (b > a)
    {
        a = b;
        return true;
    }
    return false;
}

template <class T>
bool chmin(T &a, const T &b)
{
    if (b < a)
    {
        a = b;
        return true;
    }
    return false;
}

ll gcdll(ll a, ll b)
{
    while (b)
    {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a < 0 ? -a : a;
}

ll lcmll(ll a, ll b)
{
    return a / gcdll(a, b) * b;
}

ll modpow(ll a, ll b, ll mod = MOD)
{
    ll res = 1 % mod;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
            res = (__int128)res * a % mod;
        a = (__int128)a * a % mod;
        b >>= 1;
    }
    return res;
}

ll exgcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll g = exgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

ll modinv(ll a, ll mod = MOD)
{
    ll x, y;
    ll g = exgcd(a, mod, x, y);
    if (g != 1)
        return -1;
    x %= mod;
    if (x < 0)
        x += mod;
    return x;
}

vector<int> sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;
    if (n >= 0)
        isPrime[0] = false;
    if (n >= 1)
        isPrime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (!isPrime[i])
            continue;
        primes.push_back(i);
        if ((ll)i * i <= n)
        {
            for (ll j = 1LL * i * i; j <= n; j += i)
            {
                isPrime[(int)j] = false;
            }
        }
    }
    return primes;
}

vector<pair<ll, int>> factorize(ll n)
{
    vector<pair<ll, int>> fac;
    for (ll p = 2; p * p <= n; p += (p == 2 ? 1 : 2))
    {
        if (n % p == 0)
        {
            int cnt = 0;
            while (n % p == 0)
            {
                n /= p;
                cnt++;
            }
            fac.push_back({p, cnt});
        }
    }
    if (n > 1)
        fac.push_back({n, 1});
    return fac;
}

vector<ll> divisors(ll n)
{
    vector<ll> d;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (i * i != n)
                d.push_back(n / i);
        }
    }
    sort(d.begin(), d.end());
    return d;
}

struct DSU
{
    vector<int> p, sz;
    DSU(int n = 0) { init(n); }
    void init(int n)
    {
        p.resize(n + 1);
        sz.assign(n + 1, 1);
        iota(p.begin(), p.end(), 0);
    }
    int find(int x)
    {
        if (p[x] == x)
            return x;
        return p[x] = find(p[x]);
    }
    bool unite(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a == b)
            return false;
        if (sz[a] < sz[b])
            swap(a, b);
        p[b] = a;
        sz[a] += sz[b];
        return true;
    }
};

struct Fenwick
{
    int n;
    vector<ll> bit;
    Fenwick(int n = 0) { init(n); }
    void init(int n_)
    {
        n = n_;
        bit.assign(n + 1, 0);
    }
    void add(int idx, ll val)
    {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] += val;
    }
    ll sum(int idx) const
    {
        ll res = 0;
        for (; idx > 0; idx -= idx & -idx)
            res += bit[idx];
        return res;
    }
    ll rangeSum(int l, int r) const
    {
        if (l > r)
            return 0;
        return sum(r) - sum(l - 1);
    }
};

vector<int> bfs(const vector<vector<int>> &g, int src)
{
    int n = (int)g.size();
    vector<int> dist(n, -1);
    queue<int> q;
    dist[src] = 0;
    q.push(src);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : g[u])
        {
            if (dist[v] != -1)
                continue;
            dist[v] = dist[u] + 1;
            q.push(v);
        }
    }
    return dist;
}

void dfs_recursive(int u, const vector<vector<int>> &g, vector<int> &vis)
{
    vis[u] = 1;
    for (int v : g[u])
    {
        if (!vis[v])
            dfs_recursive(v, g, vis);
    }
}

vector<int> dfs_iterative(const vector<vector<int>> &g, int src)
{
    int n = (int)g.size();
    vector<int> vis(n, 0), order;
    stack<int> st;
    st.push(src);
    while (!st.empty())
    {
        int u = st.top();
        st.pop();
        if (vis[u])
            continue;
        vis[u] = 1;
        order.push_back(u);
        for (int i = (int)g[u].size() - 1; i >= 0; i--)
            if (!vis[g[u][i]])
                st.push(g[u][i]);
    }
    return order;
}

vector<ll> prefix_sum(const vector<ll> &a)
{
    int n = (int)a.size();
    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
        pref[i + 1] = pref[i] + a[i];
    return pref;
}

ll range_sum(const vector<ll> &pref, int l, int r)
{
    return pref[r + 1] - pref[l];
}

ll max_sum_fixed_window(const vector<ll> &a, int k)
{
    if (k > (int)a.size())
        return 0;
    ll cur = 0;
    for (int i = 0; i < k; i++)
        cur += a[i];
    ll best = cur;
    for (int i = k; i < (int)a.size(); i++)
    {
        cur += a[i] - a[i - k];
        chmax(best, cur);
    }
    return best;
}

int min_length_subarray_at_least_sum(const vector<ll> &a, ll target)
{
    int n = (int)a.size();
    int ans = n + 1;
    ll sum = 0;
    int l = 0;
    for (int r = 0; r < n; r++)
    {
        sum += a[r];
        while (sum >= target)
        {
            chmin(ans, r - l + 1);
            sum -= a[l++];
        }
    }
    return ans == n + 1 ? -1 : ans;
}

int lower_bound_index(const vector<ll> &a, ll x)
{
    int l = 0, r = (int)a.size();
    while (l < r)
    {
        int m = l + (r - l) / 2;
        if (a[m] < x)
            l = m + 1;
        else
            r = m;
    }
    return l;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;

    ll g = 0;
    for (ll x : a)
        g = gcdll(g, x);

    cout << g << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;
    while (tc--)
        solve();
    return 0;
}
