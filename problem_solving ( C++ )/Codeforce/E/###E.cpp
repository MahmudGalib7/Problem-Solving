#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ll int t;
    cin >> t;
    ll int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    ll int min_val = arr[0], min_idex = 0;

    for (int i = 0; i < t; i++)
    {
        if (arr[i] < min_val)
        {
            min_val = arr[i];
            min_idex = i;
        }
    }
    cout << min_val << " " << min_idex + 1 << endl;
    return 0;
}