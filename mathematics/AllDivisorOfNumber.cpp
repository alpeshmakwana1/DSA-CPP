#include <iostream>
using namespace std;

// Naive Approach
/*
    Time Complexity: Θ(n)
    Space Complexity: O(1)
*/
void printAllDivisorOfNumber_Naive(int n)
{

    if (n == 0)
        cout << "0 is not natural number";

    // Loop throgh all numbers from 1 to N
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        { // If number if divisible by i print the number
            cout << i << " ";
        }
    }
    cout << endl;
}

// Efficient Approach
/*
    Time Complexity: Θ(√n)
    Space Complexity: O(1)

    Issue : This will not print divisors in sorted order
    Output : Divisors of 1246 are: 1 1246 2 623 7 178 14 89
*/
void printAllDivisorOfNumber_Efficient(int n)
{

    if (n == 0)
        cout << "0 is not natural number";

    // Loop throgh all numbers from 1 to N
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        { // If number if divisible by i print the number
            cout << i << " ";
            int res = n / i;
            if (res != i) // Check that if divisor and i both equal print number only once
                cout << res << " ";
        }
    }
    cout << endl;
}

// Efficient Approach : Print Divisors in sorted order
/*
    Time Complexity: Θ(√n)
    Space Complexity: O(1)
*/
void printAllDivisorOfNumber_Efficient_Sorted(int n)
{

    if (n == 0)
        cout << "0 is not natural number";

    // Loop throgh all numbers from 1 to sqrt(n)
    //Note : We are not cosideting the number whose squre is equal to n ,in this loop
    //Because We will start next loop from that number
    int i = 1 ;
    for (; i * i < n; i++)
    {
        if (n % i == 0)
        { // If number if divisible by i print the number
            cout << i << " ";;
        }
    }

    //Start the loop from where last loop ends and decrease the number to 1
    for ( ; i >= 1; i--)
    {
        // If number if divisible by i and not same as i than print the number an
        if (n % i == 0)
        {
            //Prints n/i so that the numbers are printing in increasing order
            //i.e: for 100 ,loop starts from 10 to 1 and dvisors printed from 10 to 100
            cout << n/i << " ";
        }
    }
    cout << endl ;
}

int main()
{
    int n = 100; // example number
    cout << "Divisors of " << n << " are: ";
    printAllDivisorOfNumber_Efficient_Sorted(n);
    return 0;
}