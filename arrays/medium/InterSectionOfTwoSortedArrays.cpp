#include <bits/stdc++.h>

#include <iostream>
using namespace std;

/**
 * This function finds the intersection of two sorted arrays.
 * It iterates through each element in the first array and checks for its
 * presence in the second array. If an element is found in both arrays, it is
 * added to the result vector.
 *
 * Time complexity: O(n1 * n2), where n1 and n2 are the sizes of the input
 * arrays. Space complexity: O(n2), where n2 is the size of the second input
 * array.
 *
 * @param a The first sorted array.
 * @param b The second sorted array.
 */
void intersectionOfTwoSortedArrays_1(vector<int> a, vector<int> b) {
    // Get the sizes of the input arrays
    int n1 = a.size();
    const int n2 = b.size();

    // Create a visited array to keep track of elements in the second array that
    // have been visited
    vector<int> visited(n2, 0);

    // Create a result vector to store the intersection of the two arrays
    vector<int> result;

    // Iterate through each element in the first array
    for (int i = 0; i < n1; i++) {
        // Iterate through each element in the second array
        for (int j = 0; j < n2; j++) {
            // If the current element in the second array is greater than the
            // current element in the first array, we can break the loop because
            // the arrays are sorted
            if (b[j] > a[i]) {
                break;
            }
            // If the current elements in both arrays are equal and the current
            // element in the second array has not been visited, add it to the
            // result vector and mark it as visited
            else if (a[i] == b[j] && visited[j] == 0) {
                result.push_back(a[i]);
                visited[j] = 1;
                break;
            }
        }
    }

    // Print the intersection of the two arrays
    for (int a : result) {
        cout << a << " ";
    }
}

/*
        Approach -2
        Two Pointers
*/
/**
 * This function finds the intersection of two sorted arrays using the
 * two-pointer technique. It uses two pointers, one for each array, and compares
 * the elements at the current positions. If the elements are equal, the element
 * is added to the result vector and both pointers are moved forward. If the
 * element in the first array is smaller, the first pointer is moved forward. If
 * the element in the second array is smaller, the second pointer is moved
 * forward.
 *
 * Time complexity: O(n1 + n2), where n1 and n2 are the sizes of the input
 * arrays. Space complexity: O(min(n1, n2)), where min(n1, n2) is the size of
 * the smaller input array.
 *
 * @param a The first sorted array.
 * @param b The second sorted array.
 */
void intersectionOfTwoSortedArrays_2(vector<int> a, vector<int> b) {
    // Get the sizes of the input arrays
    int n1 = a.size();
    int n2 = b.size();

    // Create a result vector to store the intersection of the two arrays
    vector<int> result;

    // Initialize two pointers, one for each array
    int i = 0, j = 0;

    // Iterate through the arrays using the two-pointer technique
    while (i < n1 && j < n2) {
        // If the current element in the first array is smaller, move the first
        // pointer forward
        if (a[i] < b[j]) {
            i++;
        }
        // If the current element in the second array is smaller, move the
        // second pointer forward
        else if (a[i] > b[j]) {
            j++;
        }
        // If the current elements in both arrays are equal, add the element to
        // the result vector and move both pointers forward
        else {
            result.push_back(a[i]);

            i++;
            j++;
        }
    }

    // Print the intersection of the two arrays
    for (int a : result) {
        cout << a << " ";
    }
}
int main() {
    vector<int> a = {1, 2, 2, 3, 4, 5, 6, 6, 7};
    vector<int> b = {2, 4, 5, 5, 6, 6, 7};

    intersectionOfTwoSortedArrays_2(a, b);
    return 0;
}