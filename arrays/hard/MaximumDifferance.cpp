/*
 * Given an array arr[] of n positive integers, the task is to find the maximum of j - i subjected to the constraint of arr[i] <= arr[j] and i <= j.

    Examples :

    Input: arr[] = [34, 8, 10, 3, 2, 80, 30, 33, 1]
    Output: 6
    Explanation: for i = 1 and j = 7.

    Input: arr[] =   [1, 2, 3, 4, 5, 6]
    Output: 5
    Explanation: For i = 0 and j = 5, arr[j] >= arr[i] and j - i is maximum

    Input:  [6, 5, 4, 3, 2, 1]
    Output: 0
    Explanation: Take any i and j where i == j.
 *
 */

// C++ program to find the maximum
// j – i such that arr[i] <= arr[j]
#include <bits/stdc++.h>
using namespace std;

int maxIndexDiff(vector<int> &arr) {
	int n = arr.size();

	int ans = 0;

	for (int i=0; i<n; i++) {
	    for (int j=i+1; j<n; j++) {

	        if (arr[i] <= arr[j]) {
	            ans = max(ans, j-i);
	        }
	    }
	}

	return ans;
}

int maxIndexDiff(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;

    // Maintain increasing (value-wise)
    // indices from bottom to top
    for (int i = 0; i < n; i++)
    {

        // Push only if stack is empty
        // or current element is smaller
        if (st.empty() || arr[st.top()] > arr[i])
        {
            st.push(i);
        }
    }

    int ans = 0;

    // Traverse array from right to left
    for (int j = n - 1; j >= 0; j--)
    {

        // While stack is not empty and current right element
        // is greater than or equal to stack top's element
        while (!st.empty() && arr[st.top()] <= arr[j])
        {

            // Update max difference
            ans = max(ans, j - st.top());
            st.pop();
        }
    }

    return ans;
}
int maxIndexDiff(vector<int> &arr)
{
    // Get the size of the input array
    int n = arr.size();

    // Create a vector to store the maximum values from right to left
    vector<int> max_v(n);

    // Initialize the last element of max_v as the last element of arr
    max_v[n - 1] = arr[n - 1];

    // Iterate from the second last element to the first element
    for (int i = n - 2; i >= 0; i--)
    {
        // If the current element in arr is greater than the next element in max_v,
        // update the current element in max_v
        if (arr[i] > max_v[i + 1])
            max_v[i] = max(max_v[i + 1], arr[i]);
        else
            max_v[i] = max_v[i + 1];
    }

    // Initialize two pointers, i and j, to the start of the array
    int i = 0, j = 0;

    // Initialize the answer as negative infinity
    int ans = INT_MIN;

    // Iterate through the array using the two pointers
    while (i < n && j < n)
    {
        // If the maximum value at index j is greater than or equal to the value at index i,
        // update the answer and move the j pointer forward
        if (max_v[j] >= arr[i])
        {
            ans = max(ans, (j - i));
            j++;
        }
        // Otherwise, move the i pointer forward
        else
        {
            i++;
        }
    }
    // Return the maximum difference
    return ans;
}

int main()
{
    vector<int> arr = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    cout << maxIndexDiff(arr);
    return 0;
}