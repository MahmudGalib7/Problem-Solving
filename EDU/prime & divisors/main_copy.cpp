#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

bool isPrime(ll n) {
    if (n <= 1) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

ll countDivisors(ll n) {
    ll count = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0)
            count += (i * i == n) ? 1 : 2;
    }
    return count;
}

void Divisors(ll n) {
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            if (i != n / i)
                cout << n / i << " ";
        }
    }
}

vector<ll> primeFactorization(ll n) {
    vector<ll> factors;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        factors.push_back(n);
    return factors;
}

ll countDistinctPrimeFactors(ll n) {
    ll count = 0;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1) count++;
    return count;
}

const int N = 1e5 + 5;
vector<bool> is_prime(N, true);
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    fastio();
    ll n = 30;

    cout << "isPrime(" << n << "): " << (isPrime(n) ? "Yes" : "No") << endl;
    cout << "countDivisors(" << n << "): " << countDivisors(n) << endl;

    cout << "Prime factors of " << n << ": ";
    vector<ll> pf = primeFactorization(n);
    for (ll f : pf)
        cout << f << ' ';
    cout << endl;

    cout << "Distinct prime factors count: " << countDistinctPrimeFactors(n) << endl;

    cout << "Divisors of " << n << ": ";
    Divisors(n);
    cout << endl;

    sieve();
    cout << "Primes up to 50: ";
    for (int i = 1; i <= 50; i++) {
        if (is_prime[i])
            cout << i << ' ';
    }
    cout << endl;

    return 0;
}
