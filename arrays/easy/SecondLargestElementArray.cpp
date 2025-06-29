#include <iostream>
using namespace std;

/**
 * Problem Statement:
 * This program finds the maximum and second maximum elements in an array.
 *
 * Given an array of integers, we need to find the largest and second largest
 * elements. If there are duplicate maximum elements, the second maximum element
 * will be the next largest unique element.
 */

int main() {
    // Define the size of the array
    const int n = 5;

    // Initialize the array with sample values
    int arr[n] = {1, 4, 6, 9, 7};

    // Initialize max and second max with the smallest possible integer value
    int max = INT16_MIN;
    int s_max = INT16_MIN;

    // Iterate through the array starting from the first element
    for (int i = 0; i < n; i++) {
        // Check if the current element is greater than the max
        if (arr[i] > max) {
            // Update second max to be the current max, and update max to be the
            // current element
            s_max = max;
            max = arr[i];
        } else if (arr[i] < max && arr[i] > s_max) {
            // If the current element is less than max but greater than second
            // max, update second max
            s_max = arr[i];
        }
    }

    // Print the max and second max elements
    cout << "Max element is " << max << endl;
    cout << "Second Max element is " << s_max << endl;
    return 0;
}