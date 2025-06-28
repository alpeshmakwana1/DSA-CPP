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

// int maxIndexDiff(vector<int> &arr) {
// 	int n = arr.size();

// 	int ans = 0;

// 	for (int i=0; i<n; i++) {
// 	    for (int j=i+1; j<n; j++) {

// 	        // If arr[i] <= arr[j]
// 	        if (arr[i] <= arr[j]) {
// 	            ans = max(ans, j-i);
// 	        }
// 	    }
// 	}

// 	return ans;
// }

// int maxIndexDiff(vector<int> &arr)
// {
//     int n = arr.size();
//     stack<int> st;

//     // Maintain increasing (value-wise)
//     // indices from bottom to top
//     for (int i = 0; i < n; i++)
//     {

//         // Push only if stack is empty
//         // or current element is smaller
//         if (st.empty() || arr[st.top()] > arr[i])
//         {
//             st.push(i);
//         }
//     }

//     int ans = 0;

//     // Traverse array from right to left
//     for (int j = n - 1; j >= 0; j--)
//     {

//         // While stack is not empty and current right element
//         // is greater than or equal to stack top's element
//         while (!st.empty() && arr[st.top()] <= arr[j])
//         {

//             // Update max difference
//             ans = max(ans, j - st.top());
//             st.pop();
//         }
//     }

//     return ans;
// }
int maxIndexDiff(vector<int> &arr)
{
    int n = arr.size();
    vector<int> max_v(n);
    max_v[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > max_v[i])
            max_v[i] = max(max_v[i+1],arr[i]);
    }

    int i = 0, j = 0;
    int ans = INT_MIN;

    while (i < n && j < n)
    {
        if (max_v[j] >= arr[i])
        {
            ans = max(ans, (j - i));
            j++;
        }
        else
        {
            i++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    cout << maxIndexDiff(arr);
    return 0;
}