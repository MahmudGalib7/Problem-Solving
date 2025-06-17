#include <iostream>
using namespace std;

#define ll long long

ll sum_of_digits(ll n)
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    ll int N, A, B;
    cin >> N >> A >> B;
    ll int result = 0;
    for (int i = 1; i <= N; i++)
    {
        ll digit_sum = sum_of_digits(i);
        if (digit_sum >= A && digit_sum <= B)
        {
            result += i;
        }
    }

    cout << result << endl;
    return 0;
}