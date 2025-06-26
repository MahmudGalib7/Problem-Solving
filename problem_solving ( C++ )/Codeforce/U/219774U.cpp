#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

bool isSubsequence(const vector<ll> &arr, const vector<ll> &sub_arr) {
    int i = 0, j = 0;
    while (i < arr.size() && j < sub_arr.size()) {
        if (arr[i] == sub_arr[j]) {
            j++;
        }
        i++;
    }
    return j == sub_arr.size();
}

int main() {
    fastio();
    
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    vector<ll> sub_arr(m);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> sub_arr[i];
    }

    if (isSubsequence(arr, sub_arr)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
