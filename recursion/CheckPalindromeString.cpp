#include<iostream>
using namespace std;

bool isPalindrome(string str,int start = 0 , int end = 0){
    if(start >= end)
        return true ;
    
    while(start < end && isspace(str[start])){
        start++;
    }
    
    while(end > start && isspace(str[end])){
        end--;
    }

    if(start >= end)
        return true ;

    if(tolower(str[start]) != tolower(str[end]))
        return false ;

    return isPalindrome(str,start+1,end-1);
}
int main(){
    cout << (isPalindrome("a b c c b a",0,5) ? "true" : "false") << endl ;
    return 0;
}