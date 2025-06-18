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

// int main()
// {
//     queue<int> a;
//     queue<int> b;

//     a.push(1);
//     a.push(3);
//     a.push(5);
//     a.push(7);
//     a.push(8);
//     a.push(2);
//     a.push(4);
//     a.push(6);

//     a.pop();

//     a.front();

//     b = a;
//     while(!b.empty()) {
//         cout << b.front() << " ";
//         b.pop();
//     }

//     return 0;
// }

// int main()
// {
//     deque<int> a;
//     deque<int> b;

//     a.push_front(1);
//     a.push_back(2);
//     a.push_front(3);
//     a.push_front(4);
//     a.push_back(5);
//     a.push_front(6);
//     a.push_back(7);

//     a.pop_back();
//     a.pop_front();

//     b = a;
//     while (!b.empty())
//     {
//         cout << b.back() << " ";
//         b.pop_back();
//     }
//     return 0;
// }

int main()
{
    // priority_queue<int> arr;
    // priority_queue<int> arr2;

    // arr.push(1);
    // arr.push(111);
    // arr.push(11);
    // arr.push(2);
    // arr.push(22);
    // arr.push(222);

    // arr.pop();

    // arr2 = arr;
    // while (!arr2.empty())
    // {
    //     cout << arr2.top() << " ";
    //     arr2.pop();
    // }
    // priority_queue<int, vector<int>, greater<>> minheap;
    // minheap.push(10);
    // minheap.push(30);
    // minheap.push(20);
    // cout << minheap.top(); // output 10

    // custom object with priority queue
    priority_queue<pair<int, int>> ta;

    ta.push({3, 100});
    ta.push({5, 101});
    ta.push({7, 103});

    cout << ta.top().first << " ";
    cout << ta.top().second;

    return 0;
}