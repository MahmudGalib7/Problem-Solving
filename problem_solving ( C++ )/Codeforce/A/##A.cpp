#include <iostream>
using namespace std;

#define ll long long
int main() {
    ll int t, sum=0, a;
    cin >> t;
    while (t--) {
        cin >> a;
        sum += a;
    }
    cout << sum << endl;
    return 0;
}