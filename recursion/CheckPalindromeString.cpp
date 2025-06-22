#include<iostream>
using namespace std;

bool isPalindrome(string str,int start = 0 , int end = 0){
    if(start >= end)
        return true ;

    if(str[start] == str[end])
        isPalindrome(str,start+1,end-1);
    else
        return false ;
}
int main(){
    cout << (isPalindrome("abccba",0,5) ? "true" : "false") << endl ;
    return 0;
}