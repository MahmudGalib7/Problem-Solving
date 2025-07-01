#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();
    
    // Beautiful Matrix
  
    // int x;
    // for (int i = 0; i < 5; i++) {
    //     for(int j = 0; j < 5; j++) {
    //         cin >> x;
    //         if(x==1){
    //             cout << abs(i-2) + abs(j-2) << endl;
    //         }
    //     }
    // }

  ll int n, m;
  cin >> n >> m;
  vector<string> grid(n);
  for (int i = 0; i < n; i++) {
    cin >> grid[i];
  }
  ll int full_rows = 0;

  for (int i = 0; i < n; i++) {
    bool is_full = true;
    for (int j = 0; j < m; j++) {
        if (grid[i][j] != 'x') {
            is_full = false;
            break;
        }
    }
    if (is_full) {
        full_rows++;
    }
  }
  cout << full_rows << endl;
}

