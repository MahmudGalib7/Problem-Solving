#include <iostream>
#include <algorithm>
using namespace std;

string removeLeadingZeros(string str) {
    size_t start = 0;
    while (start < str.length() && str[start] == '0') {
        start++;
    }
    
    if (start == str.length()) {
        return "0";
    }
    
    return str.substr(start);
}

bool isPalindrome(string str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    string s;
    cin >> s;
    
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    
    string cleanReversed = removeLeadingZeros(reversed);
    
    cout << cleanReversed << endl;
    
    if (isPalindrome(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}