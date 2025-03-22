#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Part 1: Working with Arrays
    int arr[5] = { 10, 20, 30, 40, 50 };

    // Print original array
    cout << "Original Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Modify at least two elements in the array
    arr[1] = 99;  // Change second element
    arr[3] = 77;  // Change fourth element

    // Print updated array
    cout << "Modified Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Part 2: Working with Vectors
    vector<int> vec = { 100, 200, 300 };

    // Print original vector
    cout << "Original Vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // Use vector functions
    vec.push_back(400);  // Add element at the end
    cout << "After push_back(400): ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    vec.pop_back();  // Remove last element
    cout << "After pop_back(): ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Vector size: " << vec.size() << endl;  // Print current size of the vector

    // Final contents of the vector
    cout << "Final Vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
