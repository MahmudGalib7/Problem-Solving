#include <bits/stdc++.h>
#include <iostream>

int main() {
  long long int a, b;
  std::cin >> a >> b;
  long long int result = 0;
  result = std::gcd(a, b);
  std::cout << result << std::endl;
  return 0;
}
