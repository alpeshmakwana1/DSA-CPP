#include <iostream>

using namespace std ;

/**
 * Problem Statement: Remove duplicates from a sorted array.
 * 
 * Given a sorted array, remove the duplicates in-place such that each element appears only once and return the new length of the array.
 * 
 * @param arr The input array.
 * @param n The size of the input array.
 * @return The new length of the array after removing duplicates.
 */
int removeDuplicates(int arr[], int n) {
    // Base case: If the array has 0 or 1 elements, it is already sorted and has no duplicates.
    if (n == 0 || n == 1) {
        return n;
    }
    
    // Initialize the result index to 1, since the first element is always unique.
    int res = 1;
    // Iterate through the array starting from the second element.
    for (int i = 1; i < n; i++) {
        // If the current element is different from the previous unique element, add it to the result.
        if (arr[res - 1] != arr[i]) {
            // Add the current element to the result array.
                arr[res] = arr[i];
            // Increment the result index.
            res++;
        }
    }

    // Return the new length of the array after removing duplicates.
    return res ;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
 }

int main(){
    int arr[8] = {1,2,2,2,3,4,4,5};
    int res = removeDuplicates(arr,8);
    printArray(arr,res);
    return 0;
}