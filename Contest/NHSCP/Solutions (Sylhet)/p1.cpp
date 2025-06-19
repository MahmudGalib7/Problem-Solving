#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    
    if (n < 8) {
        cout << "No" << endl;
        return 0;
    }
    
    int digits = 0;
    int lowercase = 0;
    int uppercase = 0;
    int special = 0;
    
    string specialChars = "@!#$&";
    
    for (char c : s) {
        if (isdigit(c)) {
            digits++;
        } else if (islower(c)) {
            lowercase++;
        } else if (isupper(c)) {
            uppercase++;
        } else if (specialChars.find(c) != string::npos) {
            special++;
        }
    }
    
    bool hasDigit = (digits >= 1);
    bool hasSpecial = (special >= 1);
    bool hasEnoughLower = (lowercase >= n / 3);
    bool hasEnoughUpper = (uppercase >= n / 3);
    
    if (hasDigit && hasSpecial && hasEnoughLower && hasEnoughUpper) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}