#include <iostream>
using namespace std;

/*
Problem Statement:
------------------
Check whether a given array of integers is sorted in accending order

Approach:
---------
- If the array has only one element, it's trivially sorted.
- For arrays with more than one element, iterate through the array and compare
each element with the previous one.
- If any element is smaller than the previous one, the array is not sorted.
*/

// Main function
int main() {
    const int n = 3;            // Size of the array
    int arr[n] = {99, 99, 89};  // Array elements

    // If there's only one element, it's sorted
    if (n == 1) {
        cout << "Array is sorted" << endl;
        return 0;
    }

    bool sorted = true;  // Flag to track if array is sorted

    for (int i = 1; i < n; i++) {
        // If Previous element is greater than current element array is not
        // sorted
        if (arr[i - 1] > arr[i]) {
            sorted = false;
            break;
        }
    }

    // Output result
    if (sorted)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;

    return 0;
}
