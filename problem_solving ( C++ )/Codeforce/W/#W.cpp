#include <iostream>
using namespace std;

int main() {
    long long int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;

    bool result = false;
    long long int real_result = 0;
    switch(S) {
        case '+':
            result = (A + B == C);
            real_result = (A + B);
            break;
        case '-':
            result = (A - B == C);
            real_result = (A - B);
            break;
        case '*':
            result = (A * B == C);
            real_result = (A * B);
            break;
    }

    if (result == true) cout << "Yes";
    else cout << real_result;
    return 0;
}

