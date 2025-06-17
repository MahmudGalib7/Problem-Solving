#include <algorithm>
#include <iostream>
using namespace std;

#define ll long long
void solve(string s) {
  reverse(s.begin(), s.end());
  for (char i: s) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  int t;
  string s;
  cin >> t;
  for (ll int i = 0; i < t; ++i) {
       cin >> s;
       solve(s);
  }
  return 0;
}
