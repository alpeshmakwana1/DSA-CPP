#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*
    Problem Statement:

    Given an array of integers and an integer d, rotate the array to the left by d positions.

    Example:

    Input: arr = [1, 2, 3, 4, 5, 6], d = 2
    Output: [3, 4, 5, 6, 1, 2]
    Note: The rotation should be performed in-place, i.e., without using any 
    additional space that scales with the input size.

    Constraints:

    1 <= size <= 10^5
    0 <= d <= 10^5
    -10^9 <= arr[i] <= 10^9 for all i in the range [0, size - 1]
*/

/*Approach 1:
    canclulcate d%n
    Store the elments up to d in temp array
    Then rotate the main array,
    then append elements from temp array to main array
*/
/**
 * @param d : number of rotations
 */
void rotateArrayByD_1(int arr[], int size, int d)
{
    // Calculate the effective number of rotations by taking modulus of d with size
    // This is because after size rotations, the array will be the same as the original array
    d = d % size;

    // Create a temporary array to store the first d elements of the main array
    int temp[d];

    // Copy the first d elements of the main array into the temporary array
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // Shift the remaining elements of the main array to the left by d positions
    for (int i = d; i < size; i++)
    {
        arr[i - d] = arr[i];
    }

    // Copy the elements from the temporary array back into the main array
    // starting from the (size - d)th position
    // int j = 0 ;
    // for(int i = size-d ; i < size ; i++){
    //     arr[i] = temp[j];
    //     j++;
    // }

    // Alternative to vairable j
    // j is always equal to i- (size-d)
    for (int i = size - d; i < size; i++)
    {
        arr[i] = temp[i - (size - d)];
    }
}

/*
    Approach -2
    Reverese Left half, reverse right half, and reverse whole array
*/

/**
 * Rotate the array by d positions using the reverse approach.
 * 
 * @param arr The input array to be rotated.
 * @param size The size of the input array.
 * @param d The number of positions to rotate the array.
 */
void rotateArrayByD_2(int arr[], int size, int d){
    // Calculate the effective number of rotations by taking modulus of d with size
    d = d % size;
    
    // Reverse the left half of the array (first d elements)
    reverse(arr, arr + d); // Reverse in-place
    
    // Reverse the right half of the array (remaining elements)
    reverse(arr + d, arr + size); // Reverse in-place
    
    // Reverse the entire array to get the final rotated array
    reverse(arr, arr + size); // Reverse in-place
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

    int d = 2;
    const int size = 6;
    int arr[size] = {1, 2, 3, 4, 5, 6};

    rotateArrayByD_1(arr, size, d);
    rotateArrayByD_2(arr, size, d);
    printArray(arr, size);
    return 0;
}