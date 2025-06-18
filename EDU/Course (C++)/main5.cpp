#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

char grades(int mark)
{
    if (mark >= 80)
        return 'A';
    else if (mark >= 60)
        return 'B';
    else if (mark >= 40)
        return 'C';
    else
        return 'F';
}

int main()
{
    unordered_map<char, vector<int>> grade_group;

    // number of students
    int n, mark, roll;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> mark >> roll;
        char grade = grades(mark);
        grade_group[grade].push_back(roll);
    }
    for (auto &[grade, roll] : grade_group)
    {
        sort(roll.begin(), roll.end());
        cout << "Grade " << grade << ":" << " (" << roll.size() << ")" << " => ";
        for (int r : roll)
        {
            cout << r << " ";
        }
        cout << endl;
    }
    return 0;
}
