// C++ program to find K’th Smallest/
// Largest Element in Unsorted Array
#include<bits/stdc++.h>
using namespace std;  

// Partition function: Rearranges elements 
// around a pivot (last element)
int partition(vector<int> &arr, int l, int r) {  
    int x = arr[r];  
    int i = l;     

    // Iterate through the subarray
    for (int j = l; j <= r - 1; j++) {  
        
        // Move elements <= pivot to the 
        // left partition
        if (arr[j] <= x) {  
            swap(arr[i], arr[j]);  
            i++; 
        }  
    }  
    
    // Place the pivot in its correct position
    swap(arr[i], arr[r]);  
    return i;  
}  

// Randomizes the pivot to avoid worst-case performance
int randomPartition(vector<int> &arr, int l, int r) {  
    int n = r - l + 1;  
    int pivot = rand() % n;      
    swap(arr[l + pivot], arr[r]); 
    return partition(arr, l, r); 
}  

// function to find the k'th smallest element
// using QuickSelect
int quickSelect(vector<int> &arr, int l, int r, int k) {  
    
    // Check if k is within the valid range 
    // of the current subarray
    if (k > 0 && k <= r - l + 1) {  
        
        // Partition the array and get the
        // pivot's final position
        int pos = randomPartition(arr, l, r);  

        // If pivot is the k'th element, return it
        if (pos - l == k - 1)  
            return arr[pos];  

        // If pivot's position is larger than k, 
        // search left subarray
        if (pos - l > k - 1)  
            return quickSelect(arr, l, pos - 1, k);  

        // Otherwise, search right subarray and adjust k 
        // (k is reduced by the size of the left partition)
        return quickSelect(arr, pos + 1, r, k - (pos - l + 1));  
    }  
    
    // Return infinity for invalid k (error handling)
    return INT_MAX;  
}

int kthSmallest(vector<int> &arr, int k) {
    int n = arr.size();
    
    return quickSelect(arr, 0, n-1, k);
}

int main() {  
    vector<int> arr = {12, 3, 5, 7, 4, 19, 26};  
    int k = 3;  
    cout <<  kthSmallest(arr, k);  
    return 0;  
}