#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  string text = "*";
  for (int i = 1; i <= n; i++) {
    for (int j = n+1; j > i; j--) {
      std::cout << text;
    }
    std::cout << std::endl;
  }
  return 0;
}
