#include <bits/stdc++.h>
using namespace std;

bool greaterOrEqual(const string& a, const string& b) {
    if (a.size() != b.size()) return a.size() > b.size();
    return a >= b;                       
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n; cin >> n;
    int len = n.size();
    if (len & 1) ++len;                  
    while (true) {
        int half = len / 2;
        if (len > (int)n.size()) {
            cout << string(half, '4') << string(half, '7') << '\n';
            return 0;
        }
        string best = "";                
        int totalMasks = 1 << len;       
        for (int mask = 0; mask < totalMasks; ++mask) {
            if (__builtin_popcount(mask) != half) continue;   
            string s;  s.reserve(len);
            for (int i = len - 1; i >= 0; --i)
                s += ( (mask >> i) & 1 ? '7' : '4' );
            if (greaterOrEqual(s, n) && (best.empty() || s < best))
                best = std::move(s);     
        }
        if (!best.empty()) {              
            cout << best << '\n';
            return 0;
        }
        len += 2;                      
    }
}
