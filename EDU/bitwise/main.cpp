#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio()               \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void subset(const vector<int> &arr)
{
  int n = arr.size();
  int total = 1 << n;
  for (int mask = 0; mask < total; ++mask)
  {
    for (int i = 0; i < n; ++i)
    {
      if (mask & (1 << i))
        cout << arr[i] << ' ';
    }
    cout << '\n';
  }
}

bool odd_or_even(ll int n)
{
  return n & 1;
}

bool isPowerOfTwo(int n)
{
  return n > 0 && (n & (n - 1)) == 0;
}

int countSetBits(int n)
{
  int count = 0;
  while (n)
  {
    n &= n - 1;
    count++;
  }
  return count;
}

long long sum_of_subset_size_k(const vector<int>& arr, int k) {
    const int n = arr.size();
    if (k < 0 || k > n) return 0;

    long long total_sum = 0;
    const unsigned long long ALL = 1ULL << n;

    for (unsigned long long mask = 0; mask < ALL; ++mask) {
        if (__builtin_popcountll(mask) == k) {
            long long sum = 0;
            for (int i = 0; i < n; ++i)
                if (mask & (1ULL << i))
                    sum += arr[i];
            total_sum += sum;
        }
    }
    return total_sum;
}


int main()
{
  fastio();

  vector<int> nums = {1, 2, 3};
  subset(nums);

  ll int n = 6;
  cout << (odd_or_even(n) ? "Odd" : "Even") << endl;

  cout << (n << 1) << endl;
  cout << (n >> 1) << endl;

  ll int a = 5, b = 7;
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  cout << a << " " << b << endl;

  cout << (isPowerOfTwo(8) ? "Yes" : "No") << endl;
  cout << (isPowerOfTwo(7) ? "Yes" : "No") << endl;

  // Given an array of N, find all subset of the size k and return its sum
  vector<int> arr = {1,2,3};
  cout << sum_of_subset_size_k(arr, 2) << endl;

  return 0;
}
