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
    ll int count = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    while (true)
    {
        bool all_even = true;
        for (int i = 0; i < t; i++)
        {
            if (arr[i] % 2 != 0)
            {
                all_even = false;
                break;
            }
        }
        if (!all_even)
            break;
        for (int i = 0; i < t; i++)
        {
            arr[i] /= 2;
        }
        count++;
    }
    cout << count;
    return 0;
}