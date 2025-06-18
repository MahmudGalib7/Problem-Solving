#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
// int main()
// {
//     vector<int> arr = {12, 7, 23, 11, 89, 60};
//     sort(arr.begin(), arr.end(), greater<int>());
//     reverse(arr.begin(), arr.end());
//     for (int i : arr)
//      cout << i << " ";

//     vector<int> arr = {12, 7, 11};
//     auto accumlate_value = accumulate(arr.begin(), arr.end(), 0);

//     int multiplication = accumulate(arr.begin(), arr.end(), 1, [](int a, int b){ return a * b; });

//     vector<string> names = {"Galib", "Zahiri", "Galib", "Abdullah", "Galib", "Zibran", "Sadman", "Galib"};
//     string acumlate_name = accumulate(names.begin(), names.end(), string(""));

//     int accumlate_val_squared = accumulate(arr.begin(), arr.end(), 0, [](int a, int b){a += b * b; return a;});

//     auto gcd_val = accumulate(arr.begin(), arr.end(), 0, [](int a, int b) { return __gcd(a, b); });
//     auto gcd_val_2 = [](int a, int b) {
//         if (a == 0) return b;
//         if (b == 0) return a;
//         while (b != 0) {
//             int temp = b;
//             b = a % b;
//             a = temp;
//         }
//         return a;
//     };
//     cout << gcd_val << endl;
//     cout << gcd_val_2(12, 7) << endl;
//     return 0;
// }

// map, vector, list, set, STL
int main()
{
    map<string, int> students = {
        {"Galib", 90},
        {"Zahiri", 85},
        {"Abdullah", 92},
        {"Zibran", 88},
        {"Sadman", 95}};

    int total_score = accumulate(students.begin(), students.end(), 0, [](int sum, const pair<string, int> &student)
                                 { return sum + student.second; });
    cout << "Total score of all students: " << total_score << endl;

    string all_names = accumulate(students.begin(), students.end(), string(""), [](string names, const pair<string, int> &student)
                                  { return names + " " + student.first; });
    cout << "All student names: " << all_names << endl;

    vector<int> scores = {5, 3, 5, 4, 3, 4, 5};
    map<int, int> val_sum_with_frq;
    for (int score : scores)
    {
        val_sum_with_frq[score]++;
    }
    int result = accumulate(val_sum_with_frq.begin(), val_sum_with_frq.end(), 0, [](int sum, const pair<int, int> &p)
                            { return sum + p.first * p.second; });
                        
    cout << "Total score from frequency map: " << result << endl;                    
    return 0;
}