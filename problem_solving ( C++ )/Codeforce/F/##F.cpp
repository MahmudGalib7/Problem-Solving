#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ll int t;
    cin >> t;
    ll arr[t];

    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < t; i++) {
        cout << arr[t-i-1] << " ";
    }
    return 0;
}