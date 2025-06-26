#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();
    
    ll int t;
    cin >> t;
    string s;
    cin >> s;
    ll int sum = 0;
    for(char i: s) {
        if(isdigit(i)) sum+= i-'0';
    }
    cout << sum;
    return 0;
}