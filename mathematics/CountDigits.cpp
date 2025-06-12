#include<iostream>

using namespace std ;

int countDigit(int n){
    int cnt = 0 ;
    while(n > 0){
        cnt++ ;
        n = n/10 ;
    }

    return cnt ;
}

int main(){
    cout << countDigit(10) << endl ;
    return 0;
}