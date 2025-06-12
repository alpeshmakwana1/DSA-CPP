#include<iostream>
using namespace std;

long factorialIterative(int n){
    if(n == 0 || n == 1)
        return 1 ;
    
    long result = 1 ;
    while (n > 1)
    {
        result *= n ;
        n-- ;
    }

    return result ;
    
}

//Naiver Approach
//Finc the factorial of a number and then count zeros
//Time Complexity O(n)

/*
 Issues:
    Computationally expensive for large n (e.g., 100! is a huge number).
    Prone to integer overflow.
*/
int trailingZerosInFactorial(int n){
    long fact = factorialIterative(n);

    cout << "factorial of" << n << " is " << fact <<endl;
    int cnt = 0 ;
    
    while (fact%10 == 0)
    {
        cnt++;
        fact = fact/10 ;
    }

    return cnt ;
    
}

/*
Trailing zeroes are created by pairs of 2 and 5 in the prime factorization of n!. Since there are always more 2s than 5s, we only need to count the number of 5s.
Steps:

    Count how many multiples of 5 are ≤ n.
    Count higher powers of 5 (25, 125, etc.) as they contribute extra 5s.
*/

int countTrailingZeros(int n) {
    int res = 0;
    for (int i = 5; i <= n; i *= 5) {
      res += n / i;
    }
    return res;
}

int main(){

    cout << trailingZerosInFactorial(10) << endl;
    cout << countTrailingZeros(25) << endl;
    return 0;
}