#include<iostream>
using namespace std;

//Selection Sort Algorithm means sorting an array by repeatedly finding the minimum element from the unsorted part and putting it at the beginning.
// Function to perform selection sort on an array 
void selectionSort(int arr[], int n) {
    // Traverse through all array elements
    for (int i = 0; i < n; i++) {
        int min = i; // Assume the current index is the minimum
        // Find the minimum element in the unsorted part
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j; // Update min if a smaller element is found
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[i], arr[min]);
    }
}

int main()
{
    int n = 5; // Size of the array
    int arr[] = { 64, 25, 12, 22, 11 };
    selectionSort(arr,n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " " ;
    }

    return 0;
}
