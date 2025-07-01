#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();
    
    ll S, T;
    cin >> S >> T;
    ll count = 0;

    for (int a = 0; a <= S; a++) {
        for (int b = 0; b <= S; b++) {
            for (int c = 0; c <= S; c++) {
                if ((a + b + c) <= S && (a * b * c) <= T) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}