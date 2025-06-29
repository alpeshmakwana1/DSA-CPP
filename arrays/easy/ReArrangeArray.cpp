#include <iostream>
using namespace std;

/**
 * Problem Statement:
 * Rearrange the elements of the given array such that the value at each index
 * is equal to the value at that index in the original array. This is achieved
 * by using the property of the array where arr[i] is used as an index to access
 * another element in the array.
 *
 * @param arr The input array to be rearranged
 * @param n The size of the input array
 */
void rearrangeArray(int arr[], int n) {
    // Iterate over each element in the array
    for (int i = 0; i < n; i++) {
        // Store the value at arr[i] as an index to access another element,
        // and add the value at that index (modulo n) multiplied by n to the
        // current element
        arr[i] = arr[i] + (arr[arr[i]] % n) * n;
    }

    // Iterate over each element in the array again
    for (int i = 0; i < n; i++) {
        // Divide each element by n to get the final rearranged value
        arr[i] = arr[i] / n;
    }
}
int main() {
    const int n = 5;
    int arr[n] = {4, 0, 2, 1, 3};

    rearrangeArray(arr, n);

    for (int val : arr) cout << val << " ";
    cout << endl;

    return 0;
}