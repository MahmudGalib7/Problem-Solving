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

    ll int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    ll int r, c;
    cin >> r >> c;
    r--;
    c--;

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    bool all_x = true;

    for (int i = 0; i < 8; i++)
    {
        int nr = r + dx[i];
        int nc = c + dy[i];

        if (nr >= 0 && nr < n && nc >= 0 && nc < m)
        {
            if (grid[nr][nc] != 'x')
            {
                all_x = false;
                break;
            }
        }
    }

    cout << (all_x ? "yes" : "no") << endl;

    return 0;
    return 0;
}