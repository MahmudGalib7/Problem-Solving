#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio();
    ll n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    ll lonely_count = 0;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (grid[r][c] != 'x')
                continue;
            bool has_neighbor_x = false;
            for (int i = 0; i < 8; i++) {
                int nr = r + dx[i];
                int nc = c + dy[i];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                    if (grid[nr][nc] == 'x') {
                        has_neighbor_x = true;
                        break;
                    }
                }
            }
            if (!has_neighbor_x) {
                lonely_count++;
            }
        }
    }
    cout << lonely_count << endl;
    return 0;
}
