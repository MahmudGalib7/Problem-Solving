#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

// void backtrack(vector<int>& nums, vector<bool>& used, vector<int>& path, vector<vector<int>>& result) {
//     if (path.size() == nums.size()) {
//         result.push_back(path);
//         return;
//     }

//     for (int i = 0; i < nums.size(); ++i) {
//         if (used[i]) continue;
//         if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
//             continue;

//         used[i] = true;
//         path.push_back(nums[i]);
//         backtrack(nums, used, path, result);
//         path.pop_back();
//         used[i] = false;
//     }
// }

// vector<vector<int>> permutation(vector<int> nums) {
//     sort(nums.begin(), nums.end());
//     vector<vector<int>> result;
//     vector<int> path;
//     vector<bool> used(nums.size(), false);
//     backtrack(nums, used, path, result);
//     return result;
// }

// int main() {
//     fastio();
//     vector<int> s = {1, 2, 3};
//     vector<vector<int>> perms = permutation(s);

//     for (const auto& p : perms) {
//         for (int num : p)
//             cout << num << " ";
//         cout << "\n";
//     }

//     return 0;
// }


int main() {
    vector<int> a = {1, 2, 3};
    sort(a.begin(), a.end());

    do {
        for (int x : a) cout << x << " ";
        cout << "\n";
    } while (next_permutation(a.begin(), a.end()));
}