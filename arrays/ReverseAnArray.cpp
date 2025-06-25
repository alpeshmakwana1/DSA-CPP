#include<iostream>
#include "array_utils.h"

using namespace std;


int main(){
    const int sizeOfArray = 5 ;
    int arr[sizeOfArray] = {1,2,3,4,5};

    int i = 0 , j = sizeOfArray -1 ;

    while (i < j)
    {
        int temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;

        i++ ;
        j--;
    }

    printArray(arr,sizeOfArray);
    
    return 0;
}