/**
 * Problem Statement: 
 * Rotate an array to the right by one position. For example, if the input array is [1, 2, 3, 4, 5], 
 * the output array should be [5, 1, 2, 3, 4].
 *
 * This program defines two functions: printArray() to print the elements of an array and rotateArray() 
 * to rotate the array to the right by one position.
 */

 #include<iostream>
 using namespace std;
 
 /**
  * Function to print the elements of an array.
  */
 void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
 }
 
 /**
  * Function to rotate an array to the right by one position.
  * 
  * @param arr The input array to be rotated.
  * @param size The size of the input array.
  */
 void rotateArray(int arr[], int size) {
     // Store the first element in a temporary variable
     int temp = arr[0];
     // Shift all elements to the left by one position
     for (int i = 0; i < size - 1; i++) {
         arr[i] = arr[i + 1];
     }
     // Place the first element at the end of the array
     arr[size - 1] = temp;
 }
 
 int main(){
    int arr[5] = {1,2,3,4,5};
    rotateArray(arr,5);
    printArray(arr,5);
 }