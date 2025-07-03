#include <iostream>

using namespace std ;

// Function to perform Bubble Sort on an array
void bubbleSort(int arr[], int n) {
    // Traverse through all array elements from end to start
    for (int i = n-1; i > 0; i--) {
        // Flag to check if any swapping happened in this pass
        bool didSwap = false ;
        // Loop through the array up to the i-th element
        for (int j = 0; j < i; j++) {
            // Swap if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                didSwap = true ; // Set flag if swap occurred
            }
        }
        // If no swaps occurred, the array is already sorted
        if(!didSwap)
            break;
    }
}
int main() {
    int n = 5; // Size of the array
    int arr[] = { 64, 25, 12, 23, 14 };
    bubbleSort(arr,n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] <<" ";
    }
    return 0;
}