#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll int N;
    cin >> N;

    bool isPrime[N + 1];
    for (ll int i = 0; i <= N; i++)
    {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for (ll int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (ll int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (ll int i = 2; i <= N; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}