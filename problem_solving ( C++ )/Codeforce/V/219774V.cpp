#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    fastio();

    ll t, n;
    cin >> t >> n;

    vector<int> arr(t);
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    map<int, int> frequencyMap;
    for (int element : arr)
    {
        frequencyMap[element]++;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << frequencyMap[i] << endl;
    }
    return 0;
}
