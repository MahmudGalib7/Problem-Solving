#include <iostream>
using namespace std;

#define ll long long

ll factorial(ll n) {
  if (n == 0 || n == 1) return 1;
  return n * factorial(n - 1);
}

int main() {
  ll t, n;
  cin >> t;
  for (ll i = 0; i < t; i++) {
    cin >> n;
    cout << factorial(n) << endl;
  }
  return 0;
}

