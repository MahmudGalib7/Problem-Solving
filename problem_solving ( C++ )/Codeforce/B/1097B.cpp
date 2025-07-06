#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> angles(n);
    for (int i = 0; i < n; i++) {
        cin >> angles[i];
    }

    int total_combinations = 1 << n;
    for (int mask = 0; mask < total_combinations; mask++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i))
                sum += angles[i];
            else
                sum -= angles[i];
        }
        if ((sum % 360 + 360) % 360 == 0) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}
