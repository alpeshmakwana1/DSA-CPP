#include<iostream>
using namespace std;


int main(){
    const int n = 5 ;
    int arr[n] = {1,4,6,9,7};

    int max = INT16_MIN;
    int s_max = INT16_MIN ;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] > max){
            s_max = max ;
            max = arr[i];
        }else if(arr[i] < max && arr[i] > s_max){
            s_max = arr[i];
        }
    }

    cout << "Max element is "<< max << endl ;
    cout << "Second Max element is "<< s_max << endl ;
    return 0;
}