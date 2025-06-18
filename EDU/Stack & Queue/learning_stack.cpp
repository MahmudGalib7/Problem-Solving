#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
#define ll long long
#define endl '\n'

// int main()
// {
//     stack<int> arr;
//     stack<int> arr2;
//     arr.push(1);
//     arr.push(111);
//     arr.push(11);
//     arr.push(2);
//     arr.push(22);
//     arr.push(222);

//     arr.pop();

//     cout << arr.top();
//     arr.empty();

//     arr2 = arr;
//     while(!arr2.empty()) {
//         cout << arr2.top() << " ";
//         arr2.pop();
//     }
//     return 0;
// }

int main()
{
    queue<int> a;
    queue<int> b;

    a.push(1);
    a.push(3);
    a.push(5);
    a.push(7);
    a.push(8);
    a.push(2);
    a.push(4);
    a.push(6);

    a.pop();

    a.front();

    b = a;
    while(!b.empty()) {
        cout << b.front() << " ";
        b.pop();
    }

    return 0;
}