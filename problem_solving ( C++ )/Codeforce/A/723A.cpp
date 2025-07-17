#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> points(3);
    for(int i = 0; i < 3; i++) {
        cin >> points[i];
    }
    sort(points.begin(), points.end());
    for(int i =0; i < 1; i++) {
        cout << (points[i+1] - points[i]) + (points[i+2] - points[i+1]) << endl;
    }
    return 0;
}