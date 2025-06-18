#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ll t, a;
    cin >> t;
    ll n[t];  // Variable length array
    
    for(int i = 0; i < t; i++) {
        cin >> n[i];  // Direct assignment, not +=
    }
    
    cin >> a;
    
    for(int i = 0; i < t; i++) {
        if(n[i] == a) {
            cout << i << endl;
            return 0;  // Exit immediately after finding
        }
    }
    
    cout << -1 << endl;  // Print -1 if not found
    return 0;
}