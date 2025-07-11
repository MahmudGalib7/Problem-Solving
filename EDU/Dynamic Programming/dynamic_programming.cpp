#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}
// 0 1 1 2 3 5
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << fib(n);

    return 0;
}