#include <iostream>
using namespace std;

int main() {
  int year = 365;
  int month = 30;

  int day; cin >> day;

  year = day / 365;
  day = day % 365;
  month = day / 30;
  day = day % 30;

  cout << year << " years" << "\n" << month << " months" << "\n" << day << " days" << endl;
  return 0;
}
