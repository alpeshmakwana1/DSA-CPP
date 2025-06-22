#include<iostream>
using namespace std;

// int reverseNo(int n){
//     int res = 0 ;
//     while (n>0)
//     {
//         res = (10*res) + (n%10);
//         n = n/10 ;
//     }

//     return res ;
// }

int reverseNo(int n){
    if(n <= 0)
        return 0 ;
    cout << n%10 << endl;
    return n%10 + reverseNo(n/10);
}

int main(){
    cout<< reverseNo(123) << endl ;
    return 0;
}