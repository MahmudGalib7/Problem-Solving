#include <iostream>
using namespace std;

bool prime( long long int n) {
  if (n < 2) return false;
  for (long long int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  long long int n;
  cin >> n;
  cout << (prime(n) ? "YES" : "NO") << endl; 
  return 0;
}
