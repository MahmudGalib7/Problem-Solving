#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int opinions[t];
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> opinions[i];
        sum += opinions[i];
    }
    if (sum > 0)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
    return 0;
}
