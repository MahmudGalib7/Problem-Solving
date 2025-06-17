#include <iostream>
using namespace std;

bool islucky(int n)
{
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;

    bool found = false;
    for (int i = m; i <= n; i++)
    {
        if (islucky(i))
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << -1;
    }
}