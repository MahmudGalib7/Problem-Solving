#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int dp[20005];

bool isSubsetSum(vector<int>& nums, int target) {
    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int num : nums) {
        for (int sum = target; sum >= num; --sum) {
            dp[sum] = dp[sum] || dp[sum - num];
        }
    }

    return dp[target];
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {3, 34, 4, 12, 5, 2};
    int target = 30;
    cout << isSubsetSum(arr, target);
    return 0;
}