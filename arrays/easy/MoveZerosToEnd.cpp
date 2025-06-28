#include <iostream>

using namespace std;

/**
 * Problem Statement: Move all zeros in the given array to the end.
 * 
 * This function takes an array of integers and its size as input, and rearranges the elements
 * such that all non-zero elements are moved to the front of the array, and all zeros are moved to the end.
 * 
 * @param arr The input array of integers.
 * @param size The size of the input array.
 */
void moveZerosToEnd(int arr[], int size) {

    // Initialize a counter to keep track of the position where the next non-zero element should be placed
    int count = 0;
    
    // Iterate through the array to find non-zero elements and move them to the front
    for (int i = 0; i < size; i++) {
        // If the current element is not zero, move it to the position pointed to by the counter
        if (arr[i] != 0)
            arr[count++] = arr[i];
    }

    // Fill the remaining positions in the array with zeros
    for (int i = count; i < size; i++) {
        arr[i] = 0;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    const int sizeOfArray = 8;
    int arr[sizeOfArray] = {1, 2, 3, 0, 0, 0, 4, 5};
    moveZerosToEnd(arr,sizeOfArray);
    printArray(arr, sizeOfArray);
    return 0;
}