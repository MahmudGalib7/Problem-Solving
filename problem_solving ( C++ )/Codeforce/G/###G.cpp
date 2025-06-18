#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ll int t;
    cin >> t;
    ll int arr[t];
    ll int rev_arr[t];
    for(ll int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    for(ll int i = 0; i < t; i++) {
        rev_arr[i] = arr[t-i-1];
    }
    for(ll int i = 0; i < t; i++) {
        if(arr[i] != rev_arr[i]) {
            cout << "NO" << endl;
            return 0;
        } 
    }
    cout << "YES" << endl;
    return 0;
}