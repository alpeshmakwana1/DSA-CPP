#include<iostream>
using namespace std;

    // Problem Statement: Insert an element at a specific position in an array.
    // Given an array of size 6, insert the element 90 at the first position (index 0).

int main(){
    const int sizeOfArray = 6 ;  // Define the size of the array
    int arr[sizeOfArray] = {1,2,3,4,5};  // Initialize the array with some values
    int element = 90 ;  // The element to be inserted
    int index = 0 ;  // The position where the element will be inserted


    // Shift elements to the right to make space for the new element
    int temp = element ;  // Store the element to be inserted in a temporary variable
    for(int i = index ; i < sizeOfArray -1 ; i++){
        // Swap the current element with the temporary variable
        element = arr[i];  // Store the current element in the element variable
        arr[i] = temp ;  // Replace the current element with the temporary variable
        temp = element ;  // Update the temporary variable with the current element
    }

    // Insert the new element at the end of the array
    arr[sizeOfArray-1 ] =  temp ;  // Assign the temporary variable to the last element of the array

    // Print the modified array
    for(int n : arr){
        cout << n << " ";
    }
    cout << endl;
    return 0;
}