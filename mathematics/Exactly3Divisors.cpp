#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    if (n <= 3)
        return true;

    if(n%2 ==0 || n %3 ==0)
        return false ;
    
    for (int i = 5; i * i <= n; i += 6)
    {
        // Check if n is divisible by i or i + 2
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true ;
}

/*
    To solve this problem, we need to understand the concept of the number of divisors of a number. 
    A number has exactly 3 divisors if and only if it is a square of a prime number. This is because 
    a prime number has only two divisors, 1 and itself, and when we square it, we get three divisors: 1, 
    the prime number, and the square of the prime number.
*/
int exactly3Divisors(int N)
{   
    int count = 0 ;
    for (int i = 2; i*i < N; i++)
    {
        if(isPrime(i)){
            count++ ;
        }    
    }

    return count;
}
int main()
{

    cout << exactly3Divisors(100) << endl;
    return 0;
}