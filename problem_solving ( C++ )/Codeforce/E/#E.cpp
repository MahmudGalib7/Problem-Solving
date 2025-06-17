#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;

#define PIE 3.141592653
int main() {
  double r;
  cin >> r;
  cout << fixed << setprecision(9) << PIE * pow(r, 2);
}
