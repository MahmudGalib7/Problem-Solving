#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define endl '\n'

void subArray(ll int arr[], ll int n)
{
    ll int max_val = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                max_val = max(max_val, arr[k]);
            }
            cout << max_val << endl;
            max_val = 0;
        }
    }
}

int main()
{
    ll int arr[] = {1, 6, 3, 7};
    ll int n = sizeof(arr) / sizeof(arr[0]);
    subArray(arr, n);
    return 0;
}