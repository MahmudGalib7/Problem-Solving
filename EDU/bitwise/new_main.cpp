#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 10; // 1010
    int k = 1;

    // n |= 1 << k;
    // cout << n;

    // if(n & (1<<k)) {cout << "On";}
    // else {cout << "Off";}

    if (n & (1 << k)){
        n &= ~(1 << k);
    }

    cout << n << endl; // 8 = 1000
    return 0;
}