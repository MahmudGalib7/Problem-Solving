#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ll int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<ll> arr(n);
        for (int k = 0; k < n; k++)
        {
            cin >> arr[k];
        }
        ll min_sum = LLONG_MAX;
        ll int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                sum = arr[i] + arr[j] + j - i;
                min_sum = min(min_sum, sum);
            }
        }
        cout << min_sum << endl;
    }
    return 0;
}