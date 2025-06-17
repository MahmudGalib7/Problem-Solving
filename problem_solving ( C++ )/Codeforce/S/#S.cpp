#include <iostream>
using namespace std;

#define ll long long

ll solve(ll int x, ll int y) {
  ll int odd = 0;
  ll int temp = 0;
  if (x > y) {
    temp = x;
    x = y;
    y = temp;
  }
  for (ll int n = x+1;n < y; n++) {
    if(n % 2 != 0) {
      odd += n;
    } 
  }
  return odd;
}

int main() {
  ll int t, x, y;
  cin >> t;
  for (int i = 0; i < t; i++) {cin >> x >> y; cout << solve(x, y) << endl;}
  return 0;
}
