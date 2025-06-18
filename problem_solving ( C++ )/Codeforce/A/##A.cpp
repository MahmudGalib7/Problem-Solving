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
    if (sum < 0) 
        cout << -sum << endl;
    else
        cout << sum << endl;
    return 0;
}