#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

ll calculateTotalPressure(const vector<ll>& hoses, ll P) {
    ll total = 0;
    for (ll capacity : hoses) {
        if (capacity > P) {
            total += P;
        } else {
            total += capacity;
        }
    }
    return total;
}

int main() {
    int N;
    ll M;
    cin >> N >> M;
    
    vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    ll left = 1;
    ll right = *max_element(A.begin(), A.end());
    ll answer = right;
    
    while (left <= right) {
        ll mid = left + (right - left) / 2;
        ll totalPressure = calculateTotalPressure(A, mid);
        
        if (totalPressure >= M) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    cout << answer << endl;
    return 0;
}