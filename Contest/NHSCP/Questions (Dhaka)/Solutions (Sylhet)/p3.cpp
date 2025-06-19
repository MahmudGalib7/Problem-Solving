#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main() {
    ll int a, lcm, gcd, b;
    cin >> a >> lcm >> gcd;

    if (lcm % gcd != 0) {
        cout << "NONE" << endl;
        return 0;
    } 

    b = (lcm / a)  * gcd;
    cout << b << endl;
    return 0;
}