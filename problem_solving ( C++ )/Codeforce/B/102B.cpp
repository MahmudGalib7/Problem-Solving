#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();
    
    string N;
    cin >> N;

    ll int count = 0;

    while(N.size() > 1) {
        ll int sum = 0;
        for(char c: N) {
            sum += c - '0';
        }
        N = to_string(sum);
        count++;
    }

    cout << count;
    return 0;
}