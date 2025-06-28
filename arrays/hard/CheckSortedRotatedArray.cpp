#include <iostream>
using namespace std;

bool checkRotatedAndSorted(int arr[], int n) {
    int inc_breaks = 0, dec_breaks = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n])
            inc_breaks++;
        if (arr[i] < arr[(i + 1) % n])
            dec_breaks++;
    }

    // Fully sorted array (not rotated)
    if (inc_breaks == 0 || dec_breaks == 0)
        return false;

    // Sorted in increasing order and rotated
    if (inc_breaks == 1 && arr[0] > arr[n - 1])
        return true;

    // Sorted in decreasing order and rotated
    if (dec_breaks == 1 && arr[0] < arr[n - 1])
        return true;

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
