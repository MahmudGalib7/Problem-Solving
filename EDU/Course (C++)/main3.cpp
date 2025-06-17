#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> num = {1, 2, 3, 4, 5};
    // auto even = count_if(num.begin(), num.end(), [](int x)
    //                      { return x % 2 == 0; });
    // cout << "Count of even numbers: " << even << endl;

    // vector<string> word = {"apple", "banana", "cherry", "date", "elderberry"};
    // auto len_ratio = count_if(word.begin(), word.end(), [](string s)
    //                           { return s.length() > 3; });
    // cout << "words with Length > 3 numbers are : " << len_ratio << endl;

    // auto spec_word_with_a = find_if(word.begin(), word.end(), [](string &s)
    //                                 { return s[0] == 'a'; });
    // if (spec_word_with_a != word.end())
    // {
    //     cout << "First word starting with 'a': " << *spec_word_with_a << endl;
    // }
    // else
    // {
    //     cout << "No word starts with 'a'" << endl;
    // }

    // vector<int> nums = {1, 2, 3, 4, 5};
    // replace(nums.begin(), nums.end(), 3, 10);
    // cout << "After replacing 3 with 10: ";
    // for (const auto &num : nums)
    // {
    //     cout << num << " ";
    // }
    // replace_if(nums.begin(), nums.end(), [](int x)
    //            { return x % 2 == 0; }, 0);
    // cout << "\nAfter replacing even numbers with 0: ";
    // for (const auto &num : nums)
    // {
    //     cout << num << " ";
    // }
    vector<int> numbers = {2, 1, 2, 3, 2, 4, 5, 2};
    // auto removed = remove(numbers.begin(), numbers.end(), 2);
    // numbers.erase(removed, numbers.end());
    // cout << "\nAfter removing 2: ";
    // for (auto it = numbers.begin(); it != removed; ++it)
    // {
    //     cout << *it << " ";
    // }
    // auto using_removed_if_for_no_reason = remove_if(numbers.begin(), numbers.end(), [](int x)
    //                                                 { return x % 2 == 0; });
    // numbers.erase(using_removed_if_for_no_reason, numbers.end());
    // cout << "\nAfter removing even numbers: ";
    // for (auto it = numbers.begin(); it != using_removed_if_for_no_reason; ++it)
    // {
    //     cout << *it << " ";
    // }

    // coustom sort with lambda
    // cout << endl;
    // vector<pair<int, int>> score_with_rolls = {
    // map<int, vector<int>, greater<int>> scores;
    // scores[90].push_back(2);
    // scores[94].push_back(1);
    // scores[87].push_back(3);
    // scores[87].push_back(4);
    // scores[78].push_back(5);
    // scores[81].push_back(9);

    // for (auto &[marks, rolls] : scores)
    // {
    //     sort(rolls.begin(), rolls.end());
    // }
    // for (auto &[marks, rolls] : scores)
    // {
    //     for (int i : rolls)
    //         cout << marks << " " << i << endl;
    // }

    // sort(numbers.begin(), numbers.end());
    // auto uniqe_values = unique(numbers.begin(), numbers.end());
    // numbers.erase(uniqe_values, numbers.end());
    // for (int i : numbers)
    //     cout << i << " ";

    // string number = "1200";
    // reverse(number.begin(), number.end());
    // for(char c: number) cout << c << " ";

    // long long int counter = 0;
    // do {
    //     for(int i: numbers) cout << i << " ";
    //     cout << endl;
    //     counter += 1;

    // } while(next_permutation(numbers.begin(), numbers.end()));
    // cout << counter;

    string word = "abcd";
    sort(word.begin(), word.end());
    long long int counter = 0;
    do
    {
        for (char c : word)
            cout << c << " ";
        cout << endl;
        counter += 1;

    } while (next_permutation(word.begin(), word.end()));
    cout << counter;
    return 0;
}

// STL : rotate, set, multiset
