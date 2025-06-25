#include <iostream>
#include "array_utils.h"

using namespace std ;


int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    
    int res = 1;
    for (int i = 1; i < n; i++) {
        if (arr[res - 1] != arr[i]) {
                arr[res] = arr[i];
            res++;
        }
    }

    return res ;
}

int main(){
    int arr[8] = {1,2,2,2,3,4,4,5};
    int res = removeDuplicates(arr,8);
    printArray(arr,res);
    return 0;
}