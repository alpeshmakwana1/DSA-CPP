#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1 ; i < n ; i++){
        int j = i ;
        while (j > 0 && arr[j] < arr[j-1])
        {
            swap(arr[j], arr[j-1]);
            j-- ;
        }
        
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
 }
int main(){
    int n ;
    cin >> n ;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}