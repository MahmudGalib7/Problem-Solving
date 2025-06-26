#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ll int t;
    cin >> t;
    vector<ll> arr(t);

    ll int max_num = 0;
    ll int max_index = 0;
    ll int min_num = LLONG_MAX;
    ll int min_index = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        max_num = max(max_num, arr[i]);
        if (arr[i] == max_num)
        {
            max_index = i;
        }
        min_num = min(min_num, arr[i]);
        if (arr[i] == min_num)
        {
            min_index = i;
        }
    }

    swap(arr[max_index], arr[min_index]);

    for(int i: arr) cout << i << " ";
    return 0;
}