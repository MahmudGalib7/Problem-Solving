#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    vector<int> starting_time_arr = {1, 3, 0, 5, 8};
    vector<int> ending_time_arr = {2, 4, 6, 7, 9};
    vector<pair<int, int>> overlap;
    int count = 0;
    for (int i = 0; i < starting_time_arr.size(); i++)
    {
        overlap.push_back({ending_time_arr[i], starting_time_arr[i]});
    }
    sort(overlap.begin(), overlap.end());
    count = 1;
    int last_end = overlap[0].first;
    for (int i = 1; i < overlap.size(); i++)
    {
        if (overlap[i].second >= last_end)
        {
            count++;
            last_end = overlap[i].first;
        }
        else
        {
            cout << "Overlapped Values: " << endl;
            cout << overlap[i].first << " " << overlap[i].second;
        }
    }
    cout << endl;
    cout << "None Overlapped Values Count: " << endl;
    cout << count << endl;

    return 0;
}