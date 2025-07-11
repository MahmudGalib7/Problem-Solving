#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void printBinary(int n) {
    for(int i=10;i>=0;i--) {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

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

    // if (n & (1 << k)){
    //     n &= ~(1 << k);
    // }


    // cout << n << endl; // 8 = 1000
    // printBinary(n);

    printBinary(59);
    int a = 59;
    int b = 4;
    int i = (a & (~((1<<(b+1)) -1)));
    int j = (a & ((1<<(b+1)) -1));
    printBinary(i);
    printBinary(j);

    int l;
    cin >> l;
    if(l &(l-1)) {
        cout << "not power of 2";
    } else {
        cout << "power of two";
    }
    return 0;
}