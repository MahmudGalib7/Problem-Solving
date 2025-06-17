#include <iostream>
using namespace std;

namespace myname{
  string name = "MasterFru";
}
int main() {
  cout << myname::name << endl;
  return 0;
}
