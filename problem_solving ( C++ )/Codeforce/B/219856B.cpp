#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();
    
    string s;
    getline(cin ,s);

    size_t pos = s.find('\\');
    cout << s.substr(0, pos) << endl;
    return 0;
}