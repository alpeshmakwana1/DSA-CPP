#include<iostream>
using namespace std;


int main(){
    const int sizeOfArray = 6 ;
    int arr[sizeOfArray] = {1,2,3,4,5};
    int element = 90 ;
    int index = 0 ;


    int temp = element ;
    for(int i = index ; i < sizeOfArray -1 ; i++){
        element = arr[i];
        arr[i] = temp ;
        temp = element ;
    }

    arr[sizeOfArray-1 ] =  temp ;

    for(int n : arr){
        cout << n << " ";
    }
    cout << endl;
    return 0;
}