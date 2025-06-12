/*
Prime factor is the factor of the given number which is a prime number. Factors are the numbers you multiply together to get another number. In simple words, prime factor is finding which prime numbers multiply together to make the original number.

Example: The prime factors of 15 are 3 and 5 (because 3×5=15, and 3 and 5 are prime numbers).
*/

#include<iostream>
using namespace std;

/*
    Time Complexity: O(√n) — We still check up to the square root of n, but with a smaller constant factor due to the skipping of many numbers.
    Space Complexity: O(1) — The space complexity remains constant.
*/
bool isPrimeMostEfficient(int n)
{
    if (n == 1)
        return false;           // 1 is not prime

    if (n <= 3)
        return true;            // 2 and 3 are prime

    // If n is divisible by 2 or 3, it's not prime
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    // Start checking from 5, incrementing by 6 each time
    for (int i = 5; i * i <= n; i += 6)
    {
        // Check if n is divisible by i or i + 2
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}


//Naive approach
/*
    Time Complexity: O(n3/2 x log n)
    Auxiliary Space: O(1)
*/
void printPrimeFactors_Naive(int n){
    for(int i = 2 ; i < n ; i++){
        if(isPrimeMostEfficient(i)){
            int x = i ;
            while (n%x ==0)
            {
                cout << i << endl;
                x = x*x ;
            }
            
        }
    }
}

//Efficient Approach
/*
    Time Complexity: O(sqrt(n) * log (n) )
    Auxiliary Space: O(1)
*/
void printPrimeFactors_Efficient(int n){

    while(n%2 == 0){
        cout << 2 << endl;
        n = n/2 ;
    }

    while(n%3 == 0){
        cout << 3 << endl;
        n = n/3 ;
    }

    for(int i = 5 ; i <= n ; i+=6){
        if(n%i == 0){
            cout << i << endl ;
            n = n/i ;
        }
        if(n%(i+2) == 0){
            cout << i+2 << endl ;
            n = n/(i+2) ;
        }
    }

    if(n > 3){
        cout << n << endl ;
    }
}


int main(){
    printPrimeFactors_Naive(150);
    printPrimeFactors_Efficient(150);
    return 0;
}
