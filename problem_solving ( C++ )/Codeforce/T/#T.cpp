#include <iostream>
using namespace std;

int main() {
  long long int A, B, C;
  cin >> A >> B >> C;
  long long int min = 0, max = 0, mid = 0;
  if (A >= B && A >= C) {
    max = A;
    min = (B <= C) ? B : C;
    mid = (B != min) ? B : C;
} else if (B >= A && B >= C) {
    max = B;
    min = (A <= C) ? A : C;
    mid = (A != min) ? A : C;
} else {
    max = C;
    min = (A <= B) ? A : B;
    mid = (A != min) ? A : B;
}
  cout << min << "\n" << mid << "\n" << max << endl;
  cout << '\n';
  cout << A << "\n" << B << "\n" << C << endl;
  return 0;
}
