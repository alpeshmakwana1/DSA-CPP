#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*
    Approach 1
    Count the 0,1,2 and then place them in array with another for loop
*/
void sort012_1(vector<int> arr, int n) {
    int c0 = 0, c1 = 0, c2 = 0;

    for (int a : arr) {
        if (a == 0)
            c0++;
        else if (a == 1)
            c1++;
        else if (a == 2)
            c2++;
    }
    for (int i = 0; i < n; i++) {
        if (i < c0)
            arr[i] = 0;
        else if (i < (c0 + c1))
            arr[i] = 1;
        else
            arr[i] = 2;
    }

    for (int a : arr)
        cout << a << " " << endl;
}

/*
    Approach -2
    Take 3 pointers l, mid and high
    l will track 0 , mid track 1 and hight track 2
*/
/**
 * Sorts an array of 0s, 1s, and 2s in-place using three pointers.
 * 
 * Time complexity: O(n), where n is the number of elements in the array.
 * Space complexity: O(1), since we only use a constant amount of space to store the pointers.
 */
void sort012_2(vector<int> arr, int n) {
    // Initialize three pointers: low, mid, and high
    int low = 0, mid = 0, high = n - 1;

    // Continue iterating until mid crosses high
    while (mid <= high) {
        // If the current element is 0, swap it with the element at the low index and increment both low and mid
        if (arr[mid] == 0)
            swap(arr[low++], arr[mid++]);
        // If the current element is 1, simply increment mid
        else if (arr[mid] == 1)
            mid++;
        // If the current element is 2, swap it with the element at the high index and decrement high
        else
            swap(arr[mid], arr[high--]);
    }
    // Print the sorted array
    for (int a : arr)
        cout << a << " " << endl;
}

int main() {
    sort012_2({ 1,1,0,0,2,0,1,2,2 }, 9);
    return 0;
}