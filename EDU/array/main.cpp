#include <iostream>
using namespace std;

// int main()
// {
//     double grade[27];

//     int mark[5] = {19, 10, 8, 17, 9};
//     int i = 5;

//     cin >> grade[2];
//     cout << "The value of grade[2] is: " << grade[2] << endl;

//     cin >> grade[i-1];
//     cout << "The value of grade[i-1] is: " << grade[i-1] << endl;

//     cin >> grade[0];
//     cout << "The value of grade[0] is: " << grade[0] << endl;
//     return 0;
// }


// int main() {

//   int numbers[5];

//   cout << "Enter 5 numbers: " << endl;

//   //  store input from user to array
//   for (int i = 0; i < 5; ++i) {
//     cin >> numbers[i];
//   }

//   cout << "The numbers are: ";

//   //  print array elements
//   for (int n = 0; n < 5; ++n) {
//     cout << numbers[n] << "  ";
//   }

//   return 0;
// }

// int main() {
    
//   // initialize an array without specifying size
//   double numbers[] = {7, 5, 6, 12, 35, 27};

//   double sum = 0;
//   double count = 0;
//   double average;

//   cout << "The numbers are: ";

//   //  print array elements
//   // use of range-based for loop
//   for (const double &n : numbers) {
//     cout << n << "  ";

//     //  calculate the sum
//     sum += n;

//     // count the no. of array elements
//     ++count;
//   }

//   // print the sum
//   cout << "\nTheir Sum = " << sum << endl;

//   // find the average
//   average = sum / count;
//   cout << "Their Average = " << average << endl;

//   return 0;
// }

// const int ARRAY_SIZE = 5;

// void display(int m[]) {
//     cout << "The marks are: ";
//     for (int i = 0; i < ARRAY_SIZE; ++i) {
//         cout << m[i] << "  ";
//     }
//     cout << endl;
// }

// int main() {
//     int marks[ARRAY_SIZE] = {19, 10, 8, 17, 9};
//     display(marks);
//     return 0;
// }

// define a function 
// pass a 2d array as a parameter
// void display(int n[][2]) {
//     cout << "Displaying Values: " << endl;
//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 2; ++j) {
//             cout << "num[" << i << "][" << j << "]: " << n[i][j] << endl;
//         }
//     }
// }

// int main() {

//     // initialize 2d array
//     int num[3][2] = {
//         {3, 4},
//         {9, 5},
//         {7, 1}
//     };

//     // call the function
//     // pass a 2d array as an argument
//     display(num);

//     return 0;
// }

// C++ Program to display all elements
// of an initialised two dimensional array

// int main() {
//     int test[3][2] = {{2, -5},
//                       {4, 0},
//                       {9, 1}};

//     // use of nested for loop
//     // access rows of the array
//     for (int i = 0; i < 3; ++i) {

//         // access columns of the array
//         for (int j = 0; j < 2; ++j) {
//             cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
//         }
//     }

//     return 0;
// }

// int main() {
//     int numbers[2][3];

//     cout << "Enter 6 numbers: " << endl;

//     // Storing user input in the array
//     for (int i = 0; i < 2; ++i) {
//         for (int j = 0; j < 3; ++j) {
//             cin >> numbers[i][j];
//         }
//     }

//     cout << "The numbers are: " << endl;

//     //  Printing array elements
//     for (int i = 0; i < 2; ++i) {
//         for (int j = 0; j < 3; ++j) {
//             cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
//         }
//     }

//     return 0;
// }

// C++ Program to Store value entered by user in
// three dimensional array and display it.

int main() {
    // This array can store upto 12 elements (2x3x2)
    int test[2][3][2] = {
                            {
                                {1, 2},
                                {3, 4},
                                {5, 6}
                            }, 
                            {
                                {7, 8}, 
                                {9, 10}, 
                                {11, 12}
                            }
                        };

    // Displaying the values with proper index.
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << "test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k] << endl;
            }
        }
    }

    return 0;
}