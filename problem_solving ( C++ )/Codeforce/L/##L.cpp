#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define endl '\n'

void subArray(ll arr[], ll n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            ll max_val = arr[i];
            for(int k = i; k <= j; k++) {
                max_val = max(max_val, arr[k]);
            }
            cout << max_val << " ";
        }
    }
    cout << endl;
}

int main() {
    ll t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        ll arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        subArray(arr, n);
    }
    return 0;
}
