#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ll n;
    cin >> n;
    
    if (n >= 1) cout << 0;
    if (n >= 2) cout << " " << 1;
    
    ll a = 0, b = 1;
    for (ll i = 3; i <= n; i++) {
        ll c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
    
    if (n > 0) cout << endl;
    return 0;
}