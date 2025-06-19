#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        
        vector<int> sorted_arr = arr;
        sort(sorted_arr.begin(), sorted_arr.end());
        
        int left = 0;
        while (left < N && arr[left] == sorted_arr[left]) {
            left++;
        }
        
        int right = N - 1;
        while (right >= 0 && arr[right] == sorted_arr[right]) {
            right--;
        }
        
        if (left > right) {
            cout << "YES" << endl;
            continue;
        }
        
        vector<int> middle(arr.begin() + left, arr.begin() + right + 1);
        sort(middle.begin(), middle.end());
        
        bool canSort = true;
        for (int i = 0; i < middle.size(); i++) {
            if (middle[i] != sorted_arr[left + i]) {
                canSort = false;
                break;
            }
        }
        
        cout << (canSort ? "YES" : "NO") << endl;
    }
    
    return 0;
}