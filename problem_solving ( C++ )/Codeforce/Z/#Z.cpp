#include <iostream>
#include <cmath>
using namespace std;

#define ll long long
int main()
{
    ll int a, b, c, d;

    cin >> a >> b >> c >> d;
    if (pow(a, b) > pow(c, d))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}