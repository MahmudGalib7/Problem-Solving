#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<string> names = {"Galib", "Zahiri", "Galib", "Abdullah", "Galib", "Zibran", "Sadman", "Galib"};
    std::cout << names.at(1) << std::endl;
    std::cout << "After adding new push_back" << std::endl;
    names.push_back("Batman");
    for (string name : names)
    {
        std::cout << name << std::endl;
    }
    names.pop_back();
    std::cout << "After pop" << std::endl;
    for (string name : names)
    {
        std::cout << name << std::endl;
    }
    std::cout << names.empty() << std::endl;
    sort(names.rbegin(), names.rend());
    reverse(names.begin(), names.end());
    for (string name : names)
    {
        cout << name << endl;
    }

    auto min = min_element(names.begin(), names.end());
    auto max = max_element(names.begin(), names.end());
    cout << "Minimum: " << *min << endl;
    cout << "Maximum: " << *max << endl;

    auto counting_vales = count(names.begin(), names.end(), "Galib");
    cout << "Count of 'Galib': " << counting_vales << endl;

    auto finding_value = find(names.begin(), names.end(), "Zibran");
    if (finding_value != names.end())
    {
        cout << "found: " << finding_value - names.begin() << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    vector<int> numbers = {1, 2, 3, 4, 5};
    auto acumlate_value = accumulate(numbers.begin() + 2, numbers.end(), 0);
    cout << "Accumulate value: " << acumlate_value << endl;

    auto highest_index_value = upper_bound(numbers.begin(), numbers.end(), 3);
    if (highest_index_value != numbers.end())
    {
        cout << "Upper bound of 3: " << *highest_index_value << endl;
    }
    else
    {
        cout << "No upper bound found" << endl;
    }

    auto lowest_index_value = lower_bound(numbers.begin(), numbers.end(), 3);
    if (lowest_index_value != numbers.end())
    {
        cout << "Lower bound of 3: " << *lowest_index_value << endl;
    }
    else
    {
        cout << "No lower bound found" << endl;
    }

    vector<int> new_nums(5);
    copy(numbers.begin(), numbers.end(), new_nums.begin());
    cout << "New names copied: " << endl;
    for (int nums : new_nums)
    {
        cout << nums << endl;
    }

    vector<int> num2(10);
    fill(num2.begin(), num2.end(), 0);
    cout << "New vector filled with 0: " << endl;
    for (int nums : num2)
    {
        cout << nums << " ";
    }
    cout << '\n';

    vector<int> num3 = {3, 1, 2, 3, 4, 5, 3};
    bool found = binary_search(num3.begin(), num3.end(), 3);
    cout << "Found ? " << (found ? "Yes" : "No") << endl;

    int num_count = upper_bound(num3.begin(), num3.end(), 3) - lower_bound(num3.begin(), num3.end(), 3);
    int num_count2 = count(num3.begin(), num3.end(), 3);
    cout << "Count of 3 using upper_bound and lower_bound: " << num_count << endl;
    cout << "Count of 3 using count: " << num_count2 << endl;
}

// Learning Points: map,set,vector,stack,queue, list