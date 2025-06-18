#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    long double left = (long double)b * log((long double)a);
    long double right = (long double)d * log((long double)c);
    
    if (left > right) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}