#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

bool isWonderful(int n) {
    // if (n % 2 == 0) return false; 
    return n & 1; // check if its odd
    
    string binary = "";
    while (n > 0) {
        binary += (n % 2) + '0';
        n /= 2;
    }
    reverse(binary.begin(), binary.end());
    return isPalindrome(binary);
}

int main() {
    int n;
    cin >> n;
    cout << (isWonderful(n) ? "YES" : "NO") << '\n';
    return 0;
}