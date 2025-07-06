#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e5 + 10;

int uniqueElements(const vector<int> arr) {
    int result = 0;
    for (int i : arr) {
        result ^= i;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {2, 3, 5, 3, 2};
    cout << uniqueElements(arr) << endl;

    return 0;
}