#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

int main()
{
    // std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    // std::cout << "Original: ";
    // for (int x : v)
    //     std::cout << x << " ";
    // std::cout << "\n";

    // std::rotate(v.begin(), v.end() - 3, v.end());

    // std::cout << "After rotate: ";
    // for (int x : v)
    //     std::cout << x << " ";
    // std::cout << "\n";

    // std::set<int> s;

    // s.insert(30);
    // s.insert(10);
    // s.insert(20);
    // s.insert(10);

    // std::cout << "Set elements: ";
    // for (int x : s)
    //     std::cout << x << " ";
    // std::cout << "\n";

    // if (s.find(20) != s.end())
    // {
    //     std::cout << "20 found in set\n";
    // }

    // s.erase(20);
    // std::cout << "After erasing 20: ";
    // for (int x : s)
    //     std::cout << x << " ";
    // std::cout << "\n";

    // std::cout << "Size: " << s.size() << "\n";

    // std::multiset<int> arr;
    // arr.insert(30);
    // arr.insert(10);
    // arr.insert(20);
    // arr.insert(10);

    // for (int y: arr) std::cout << y << " ";
    // std::cout << std::endl;

    // std::unordered_set<int> array;
    // array.insert(30);
    // array.insert(10);
    // array.insert(20);
    // array.insert(10);

    // for (int z: array) std::cout << z << " ";

    // std::map<int, int> scores_with_rolls = {
    //     {11, 46},
    //     {12, 57},
    //     {5, 64},
    //     {6, 69},
    //     {9, 78},
    //     {8, 81},
    //     {4, 86},
    //     {7, 87},
    //     {10, 91},
    //     {3, 94},
    //     {2, 97},
    //     {1, 99}
    // };

    // for(auto [roll, mark]: scores_with_rolls) std::cout << roll << " : " << mark << std::endl;

    // std::cout << "Using unsorted one: " << std::endl;

    // std::unordered_map<int, int> score_with_rolls = {
    //     {11, 46},
    //     {12, 57},
    //     {5, 64},
    //     {6, 69},
    //     {9, 78},
    //     {8, 81},
    //     {4, 86},
    //     {7, 87},
    //     {10, 91},
    //     {3, 94},
    //     {2, 97},
    //     {1, 99}
    // };

    // for(auto [roll, mark]: score_with_rolls) std::cout << roll << " : " << mark << std::endl;

    // std::vector<int> nums = {80,91,81,34,56,89,1223,321,456,78};
    // std::partition(nums.begin(), nums.end(), [](int a){return a % 2 == 0;});
    // for(int i: nums) std::cout << i << " ";

    // std::vector<int> nums = {80,91,81,34,56,89,1223,321,456,78};
    // std::stable_partition(nums.begin(), nums.end(), [](int a){return a % 2 == 0;});
    // for(int i: nums) std::cout << i << " ";

    std::vector<std::pair<int, int>> scores = {
        {69, 11},
        {78, 12},
        {64, 5},
        {64, 8},
        {79, 9},
        {79, 4},
        {69, 7},
        {99, 1},
        {91, 3},
        {94, 2},
        {94, 7},
        {91, 6}
    };

    // Create map to group students by mark
    // std::unordered_map<int, std::vector<int>> group_marks;
    std::map<int, std::vector<int>> group_marks;

    // fill the map from students pairs
    for (const auto &[mark, roll] : scores)
    {
        group_marks[mark].push_back(roll);
    }
    for (const auto &[mark, roll] : group_marks)
    {
        std::cout << mark << " => ";
        for (int r : roll)
        {
            std::cout << r << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}