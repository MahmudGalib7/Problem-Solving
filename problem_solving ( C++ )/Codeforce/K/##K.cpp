#include <iostream>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  
  for (long long int i = 1; i <= n; i++) {
    if (n % i == 0) {
      cout << i << endl;
    }
  }
  
  return 0;
}
