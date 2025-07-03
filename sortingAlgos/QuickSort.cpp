#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int low, int high){
    int pivot = low ;

    int i = low , j = high ;

    while (i < j)
    {
        while(arr[i] <= arr[pivot] && i < high){
            i++ ;
        }
        while(arr[j] > arr[pivot] && j > low){
            j-- ;
        }

        if(i < j)
            swap(arr[i],arr[j]);
    }
    
    swap(arr[j],arr[pivot]);
    
    return j ;
}

void quickSort(int arr[], int low, int high){
    if(high <= low){
        return ;
    }
    int pivot = partition(arr,low,high);

    quickSort(arr,low,pivot);
    quickSort(arr,pivot+1,high);
}

int main() {

    int n = 10; // Size of the array
    int arr[] = {34,28,1,5,48, 64, 25, 12, 23, 14 };
    quickSort(arr,0,n-1);

    for (const auto& element : arr) {
        cout << element << " ";
    }
    
    return 0;
}