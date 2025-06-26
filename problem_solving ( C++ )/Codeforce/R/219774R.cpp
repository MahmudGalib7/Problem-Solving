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

    vector<ll> main(t);
    vector<ll> perm(t);

    for (int i = 0; i < t; i++)
    {
        cin >> main[i];
    }
    for (int i = 0; i < t; i++)
    {
        cin >> perm[i];
    }

    sort(main.begin(), main.end());
    sort(perm.begin(), perm.end());
    bool isyes = true;
    for (int i = 0; i < t; i++)
    {
        if (main[i] != perm[i])
        {
            isyes = false;
            break;
        }
    }

    if (isyes)
        cout << "yes";
    else
        cout << "no";
    return 0;
}