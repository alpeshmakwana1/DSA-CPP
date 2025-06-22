#include <iostream>
using namespace std;
/*
    Time Complexity O(1)
*/
int digitRoot(int n)
{
    if (n == 0)
        return 0;
    int res = (n % 9 == 0) ? 9 : n % 9 ;
    return res ;
}

int sumOfDigits(int n){
    if(n == 0)
        return 0 ;
    return n%10 + sumOfDigits(n/10);
}

/*
    Time Complexity O(Number of Digits)
    Space Complexity O(Number of Digits)
*/
int digitRoot_Recursive(int n){
    if(n < 10)
        return n ;
    
    return digitRoot_Recursive(sumOfDigits(n));
}

int main()
{
    cout << digitRoot(99999) << endl;
    cout << digitRoot_Recursive(99999) << endl;
    return 0;
}