#include <iostream>
using namespace std;

int main() {
  long long int A, B, C;
  cin >> A >> B >> C;
  long long int min = 0, max = 0;
  if (A >= B && A >= C) {
    max = A;
    min = (B <= C) ? B : C;
} else if (B >= A && B >= C) {
    max = B;
    min = (A <= C) ? A : C;
} else {
    max = C;
    min = (A <= B) ? A : B;
}
  cout << min << " " << max;
  return 0;
}
