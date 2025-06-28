#include<iostream>

using namespace std;

/**
 * Problem Statement: 
 * This function takes an array of integers and its size as input, 
 * and reverses the order of elements in the array.
 *
 * @param arr The input array to be reversed
 * @param n The size of the input array
 */
void reverseAnArray(int arr[], int n) {
    // Initialize two pointers, one at the start and one at the end of the array
    int i = 0, j = n - 1;
    
    // Continue the loop until the two pointers meet in the middle
    while (i < j) {
        // Swap the elements at the current positions of the two pointers
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        // Move the pointers towards the center of the array
        i++;
        j--;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseAnArray(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

void printArray(int arr[], int size) {
   for (int i = 0; i < size; i++) {
       std::cout << arr[i] << " ";
   }
   std::cout << std::endl;
}

int main(){
    const int sizeOfArray = 5 ;
    int arr[sizeOfArray] = {1,2,3,4,5};

    reverseAnArray(arr,sizeOfArray);

    printArray(arr,sizeOfArray);
    
    return 0;
}