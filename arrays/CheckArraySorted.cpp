#include<iostream>
using namespace std;


int main(){
    const int n = 2;
    int arr[n] = {100, 100};

    if(n == 1){
        cout << "array is sorted" << endl ;
    }
    bool sorted = true ;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] < arr[i-1]){
            sorted = false ;
            break;
        }
    }
    if(sorted)
        cout << "Array is sorted" << endl ;
    else
        cout << "Array is not sorted" << endl ;
    return 0;
}