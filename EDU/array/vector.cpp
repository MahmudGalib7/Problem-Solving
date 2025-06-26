#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

// int main() {
//     // Static array
//     int arr[5] = {1, 2, 3, 4, 5};

//     // Dynamic vector
//     vector<int> vec;
//     vec.push_back(10);
//     vec.push_back(20);
//     vec.push_back(30);

//     // Accessing elements
//     cout << "Array first element: " << arr[0] << endl;
//     cout << "Vector first element: " << vec[0] << endl;

//     // Iterating over array
//     cout << "Array elements: ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Iterating over vector (range-based for)
//     cout << "Vector elements: ";
//     for (int x : vec) {
//         cout << x << " ";
//     }
//     cout << endl;

//     // Modifying array
//     arr[2] = 999;
//     cout << "Updated array[2]: " << arr[2] << endl;

//     // Pushing a new element into vector
//     vec.push_back(40);
//     cout << "Newly pushed vector element: " << vec.back() << endl;
//     cout << "Vector size: " << vec.size() << endl;

//     return 0;
// }

void printVector(const vector<int> &vec, const string &label)
{
    cout << label << ": ";
    for (int x : vec)
    {
        cout << x << " ";
    }
    cout << " (size: " << vec.size() << ", capacity: " << vec.capacity() << ")" << endl;
}

int main()
{
    // 1. Creating and initializing vector
    vector<int> vec = {10, 20, 30};
    printVector(vec, "Initial vector");

    // 2. size() - Returns number of elements
    cout << "Size: " << vec.size() << endl;

    // 3. empty() - Check if vector is empty
    cout << "Is empty: " << (vec.empty() ? "Yes" : "No") << endl;

    // 4. reserve(n) - Pre-allocate memory
    vec.reserve(10);
    cout << "After reserve(10), capacity: " << vec.capacity() << endl;

    // 5. push_back(value) - Add elements to the end
    vec.push_back(40);
    vec.push_back(50);
    printVector(vec, "After push_back");

    // 6. front() and back() - Access first and last elements
    cout << "Front element: " << vec.front() << endl;
    cout << "Back element: " << vec.back() << endl;

    // 7. at(index) and operator[] - Access elements
    cout << "Element at index 2 using at(): " << vec.at(2) << endl;
    cout << "Element at index 2 using []: " << vec[2] << endl;

    // 8. insert(pos, value) - Insert element at position
    vec.insert(vec.begin() + 2, 25); // Insert 25 at index 2
    printVector(vec, "After insert(25 at index 2)");

    // Insert multiple elements
    vec.insert(vec.end(), {60, 70});
    printVector(vec, "After inserting 60, 70 at end");

    // 9. erase(pos) - Remove element at position
    vec.erase(vec.begin() + 1); // Remove element at index 1
    printVector(vec, "After erase(index 1)");

    // erase(begin, end) - Remove range of elements
    vec.erase(vec.begin() + 2, vec.begin() + 4); // Remove elements from index 2 to 3
    printVector(vec, "After erase(range 2-3)");

    // 10. pop_back() - Remove last element
    vec.pop_back();
    printVector(vec, "After pop_back");

    // 11. capacity() - Current capacity
    cout << "Current capacity: " << vec.capacity() << endl;

    // 12. shrink_to_fit() - Reduce capacity to fit size
    vec.shrink_to_fit();
    cout << "After shrink_to_fit, capacity: " << vec.capacity() << endl;

    // 13. begin(), end() - Forward iterators
    cout << "Using begin() and end(): ";
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 14. rbegin(), rend() - Reverse iterators
    cout << "Using rbegin() and rend() (reverse): ";
    for (auto it = vec.rbegin(); it != vec.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 15. data() - Get pointer to underlying array
    int *ptr = vec.data();
    cout << "Using data() pointer: ";
    for (size_t i = 0; i < vec.size(); ++i)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;

    // Demonstrating with more elements
    vec.insert(vec.end(), {100, 200, 300, 400});
    printVector(vec, "Added more elements");

    // 16. clear() - Remove all elements
    cout << "Before clear - Size: " << vec.size() << ", Capacity: " << vec.capacity() << endl;
    vec.clear();
    cout << "After clear - Size: " << vec.size() << ", Capacity: " << vec.capacity() << endl;
    cout << "Is empty after clear: " << (vec.empty() ? "Yes" : "No") << endl;

    // Demonstrate empty vector operations
    vector<int> emptyVec;
    cout << "\nEmpty vector demonstration:" << endl;
    cout << "Empty vector size: " << emptyVec.size() << endl;
    cout << "Empty vector capacity: " << emptyVec.capacity() << endl;
    cout << "Is empty: " << (emptyVec.empty() ? "Yes" : "No") << endl;

    // Add some elements to show capacity growth
    cout << "\nCapacity growth demonstration:" << endl;
    for (int i = 1; i <= 10; ++i)
    {
        emptyVec.push_back(i * 10);
        cout << "Size: " << emptyVec.size() << ", Capacity: " << emptyVec.capacity() << endl;
    }

    return 0;
}