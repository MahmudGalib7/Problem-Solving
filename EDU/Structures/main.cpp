#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

// Using struct

// #include <iostream>
// using namespace std;

// Member ship functions

// struct Person {
//     string first_name;
//     string last_name;
//     int age;
//     float salary;

//     void display_info() {
//         cout << "First Name: " << first_name << endl;
//         cout << "Last Name: " << last_name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// int main() {
//     Person klein;

//     cout << "Enter first name: ";
//     cin >> klein.first_name;
//     cout << "Enter last name: ";
//     cin >> klein.last_name;
//     cout << "Enter age: ";
//     cin >> klein.age;
//     cout << "Enter salary: ";
//     cin >> klein.salary;

//     cout << "\nDisplaying Information." << endl;
//     klein.display_info();

//     return 0;
// }

// initializing outline functions

// #include <iostream>
// #include <string>
// using namespace std;

// struct Person {
//     string first_name;
//     string last_name;
//     int age;
//     float salary;
// };

// void display_data(const Person&);

// int main() {
//     Person p {"Klein", "Moretti", 22, 145000};
//     display_data(p);

//     return 0;
// }

// void display_data(const Person& p) {
//     cout << "First Name: " << p.first_name << endl;
//     cout << "Last Name: " << p.last_name << endl;
//     cout << "Age: " << p.age << endl;
//     cout << "Salary: " << p.salary;
// }

// Returing vals from structure

// #include <iostream>
// #include <string>
// using namespace std;

// struct Person {
//     string first_name;
//     string last_name;
//     int age;
//     float salary;
// };

// Person get_data();
// void display_data(const Person&);

// int main() {

//     Person p = get_data();
//     display_data(p);

//     return 0;
// }

// Person get_data() {

//     Person p;

//     string first_name;
//     string last_name;
//     int age;
//     float salary;

//     cout << "Enter first name: ";
//     cin >> first_name;
//     cout << "Enter last name: ";
//     cin >> last_name;
//     cout << "Enter age: ";
//     cin >> age;

//     cout << "Enter salary: ";
//     cin >> salary;

//     return Person{first_name, last_name, age, salary};
// }

// void display_data(const Person& p) {
//     cout << "\nDisplaying Information." << endl;
//     cout << "First Name: " << p.first_name << endl;
//     cout << "Last Name: " << p.last_name << endl;
//     cout << "Age: " << p.age << endl;
//     cout << "Salary: " << p.salary;
// }

// Pointers to structures

// struct Distance
// {
//     int feet;
//     float inch;
// };

// int main()
// {
//     fastio();

//     Distance d;
//     Distance *ptr = &d;

//     // cout << "Enter feet: ";
//     // cin >> (*ptr).feet;
//     // cout << "Enter inch: ";
//     // cin >> (*ptr).inch;

//     // cout << "Displaying information." << endl;
//     // cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";

//     cout << "Enter feet: ";
//     cin >> ptr->feet;
//     cout << "Enter inch: ";
//     cin >> ptr->inch;

//     cout << "Displaying information." << endl;
//     cout << "Distance = " << ptr->feet << " feet " << ptr->inch << " inches";

//     return 0;
// }

// Accessing pointers structures with membership functions

// struct Distance {
//     int feet;
//     float inch;

//     void print_distance() {
//     	cout << "Displaying Information." << endl;
//     	cout << "Distance = " << feet << " feet " << inch << " inches";
//     }
// };

// int main() {
//     Distance d;

//     Distance* ptr = &d;

//     cout << "Enter feet: ";
//     cin >> ptr->feet;
//     cout << "Enter inch: ";
//     cin >> ptr->inch;

//     ptr->print_distance();

//     return 0;
// }

// Enumeration

// enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

// int main()
// {
//     week today;
//     today = Wednesday;
//     cout << "Day " << today+1;
//     return 0;
// }

// enum seasons
// {
//     spring,
//     summer,
//     autumn,
//     winter
// };

// enum seasons
// {
//     spring = 34,
//     summer = 4,
//     autumn = 9,
//     winter = 32
// };

// int main()
// {

//     seasons s;

//     s = summer;
//     cout << "Summer = " << s << endl;

//     return 0;
// }

enum designFlags
{
    ITALICS = 1,
    BOLD = 2,
    UNDERLINE = 4
};

int main()
{
    int myDesign = BOLD | UNDERLINE;

    //    00000010
    //  | 00000100
    //  ___________
    //    00000110

    cout << myDesign;

    return 0;
}