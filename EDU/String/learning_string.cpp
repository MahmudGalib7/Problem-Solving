#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
#define ll long long
#define endl '\n'

int main() {
    // Declaration
    string greeting = "Hello";
    
    // Appending
    greeting += " World";
    cout << "Greeting: " << greeting << endl;

    // Size / length
    cout << "Length: " << greeting.size() << endl;

    // Accessing characters
    cout << "First character: " << greeting[0] << endl;

    // Substring
    string sub = greeting.substr(6, 5); // "World"
    cout << "Substring: " << sub << endl;

    // Find
    size_t pos = greeting.find("World");
    if (pos != string::npos) {
        cout << "\"World\" found at index: " << pos << endl;
    }

    // Replace
    greeting.replace(pos, 5, "C++");
    cout << "After replace: " << greeting << endl;

    // Inserting & Erasing
    greeting.insert(5, ",");
    cout << "After insert: " << greeting << endl;

    greeting.erase(5, 1);
    cout << "After erase: " << greeting << endl;

    return 0;
}