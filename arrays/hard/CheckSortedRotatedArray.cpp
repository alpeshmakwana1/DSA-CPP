#include <iostream>
using namespace std;

/**
 * Problem Statement: 
 * This function checks if the input array is sorted in either ascending or descending order and rotated.
 * 
 * @param arr The input array to be checked.
 * @param n The size of the input array.
 * @return True if the array is sorted and rotated, false otherwise.
 */
bool checkRotatedAndSorted(int arr[], int n) {
    // Initialize counters for breaks in increasing and decreasing sequences
    int inc_breaks = 0, dec_breaks = 0;

    // Iterate over the array to check for breaks in sequences
    for (int i = 0; i < n; i++) {
        // Check for breaks in increasing sequence
        if (arr[i] > arr[(i + 1) % n])
            inc_breaks++;
        // Check for breaks in decreasing sequence
        if (arr[i] < arr[(i + 1) % n])
            dec_breaks++;
    }

    // Fully sorted array (not rotated) is not considered valid
    if (inc_breaks == 0 || dec_breaks == 0)
        return false;

    // Check if the array is sorted in increasing order and rotated
    if (inc_breaks == 1 && arr[0] > arr[n - 1])
        return true;

    // Check if the array is sorted in decreasing order and rotated
    if (dec_breaks == 1 && arr[0] < arr[n - 1])
        return true;

    // If none of the above conditions are met, return false
    return false;
}

int main() {
    int arr1[] = {3, 4, 5, 6};  // Not rotated
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << (checkRotatedAndSorted(arr1, n1) ? "Yes" : "No") << endl;

    int arr2[] = {40, 42, 44, 46, 16, 21, 22, 27, 29, 34, 38};  // Rotated
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << (checkRotatedAndSorted(arr2, n2) ? "Yes" : "No") << endl;

    return 0;
}
