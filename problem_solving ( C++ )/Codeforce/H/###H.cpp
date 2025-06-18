#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'

void bubble_sort(ll int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    ll int arr[t];
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    bubble_sort(arr, t);
    for(int i = 0; i < t; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}