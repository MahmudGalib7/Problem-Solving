#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string digits = "";
    for (char c : s) {
        if (c != '+') digits += c;
    }

    sort(digits.begin(), digits.end());

    for (int i = 0; i < digits.size(); i++) {
        cout << digits[i];
        if (i != digits.size() - 1) cout << "+";
    }
    return 0;
}
