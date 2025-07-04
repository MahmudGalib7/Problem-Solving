#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio()               \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void subset(const vector<int>& arr) {
    int n = arr.size();
    int total = 1 << n;
    for (int mask = 0; mask < total; ++mask) {
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i))  
                cout << arr[i] << ' ';
        }
        cout << '\n';
    }
}

void thisIsme() {
  cout << "Hello World!" << endl;
}

int main()
{
  fastio();

  vector<int> nums = {1, 2, 3};
  subset(nums);
  return 0;
}
