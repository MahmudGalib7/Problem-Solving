#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

bool isPerfect(ll n) {
    if (n <= 1) return false;
    
    ll sum = 1;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    
    return sum == n;
}

int main() {
    ll num;
    cin >> num;
    
    if (isPrime(num)) {
        cout << "PRIME" << endl;
    } else if (isPerfect(num)) {
        cout << "PERFECT" << endl;
    } else {
        cout << "NONE" << endl;
    }
    
    return 0;
}