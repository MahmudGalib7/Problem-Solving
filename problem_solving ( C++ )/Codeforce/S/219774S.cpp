#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();

    int N, M;
    cin >> N >> M;

    int mat[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> mat[i][j];
        }
    }

    int X;
    cin >> X;

    bool found = false;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (mat[i][j] == X) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (found) {
        cout << "will not take number" << '\n';
    } else {
        cout << "will take number" << '\n';
    }

    return 0;
}
