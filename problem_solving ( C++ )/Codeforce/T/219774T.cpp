#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();

    ll N;
    cin >> N;

    ll arr[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    ll diag1 = 0, diag2 = 0;
    for (int i = 0; i < N; i++) {
        diag1 += arr[i][i];
        diag2 += arr[i][N - i - 1];
    }

    ll diff = abs(diag1 - diag2);
    cout << diff << endl;

    return 0;
}
