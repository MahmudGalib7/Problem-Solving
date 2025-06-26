#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ll int t;
    cin >> t;
    ll int arr[t];
    ll int max_val = 0;
    for(ll int i = 0; i < t; i++) {
        cin >> arr[i];
        max_val = max(max_val, arr[i]);
    }

    cout << max_val << endl;
    return 0;
}