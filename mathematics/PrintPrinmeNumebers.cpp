#include <iostream>
using namespace std;
#include <vector>

/*
    Time Complexity: O(√n) — We still check up to the square root of n, but with a smaller constant factor due to the skipping of many numbers.
    Space Complexity: O(1) — The space complexity remains constant.
*/

bool isPrimeMostEfficient(int n)
{
    if (n == 1)
        return false; // 1 is not prime

    if (n <= 3)
        return true; // 2 and 3 are prime

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

// Naive Approach
/*
    Time Complexity: O(n*√n)
    Space Complexity: O(1)
*/
void printPrimeNumber_Naive(int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (isPrimeMostEfficient(i))
        {
            cout << i << " ";
        }
    }
}

// Sieve of Eratosthenes Algorithm
/*
    Time Complexity O(n log log n)
*/
/*
    According to the algorithm we will mark all the numbers which are divisible by 2 and are greater than or equal to the square of it.
    Next we move to our next unmarked number 3 and mark all the numbers which are multiples of 3 and are greater than or equal to the square of it.
    We move to our next unmarked number 5 and mark all multiples of 5 and are greater than or equal to the square of it.
    Continue this Process unit i*i <= n
*/
void printPrimeNumbers_Eratosthness(int n)
{
    vector<bool> isPrime(n + 1, true);

    if (n <= 1)
    {
        cout << "No Prime numbers in range till" << n << endl;
    }

    int cnt_outer_before = 0, cnt_outer_after = 0, cnt_inner = 0;
    for (int i = 2; i * i <= n; i++)
    {
        cnt_outer_before++;
        if (isPrime[i])
        {
            cnt_outer_after++;
            for (int j = i * 2; j <= n; j = j + i)
            {
                cnt_inner++;
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }

    cout << endl
         << "cnt_outer_before " << cnt_outer_before << " cnt_outer_after " << cnt_outer_after << " cnt_inner " << cnt_inner << endl;
    cout << endl;
}

// Sieve of Eratosthenes Algorithm
/*
    Time Complexity O(n log log n)
*/
/*
    The above approach will loop throgh the multiple of 5 again
    i.e : it will vist 10,15 again even though they are covered as multiple of 2 and 3

    So this approach will remove that traversal as we start with suqure of i
    replaced i*2 with i*i
*/

void printPrimeNumbers_Optimization2(int n)
{
    vector<bool> isPrime(n + 1, true);

    if (n <= 1)
    {
        cout << "No Prime numbers in range till" << n << endl;
    }

    int cnt_outer_before = 0, cnt_outer_after = 0, cnt_inner = 0;
    for (int i = 2; i * i <= n; i++)
    {
        cnt_outer_before++;
        if (isPrime[i])
        {
            cnt_outer_after++;
            for (int j = i * i; j <= n; j = j + i)
            {
                cnt_inner++;
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }

    cout << endl
         << "cnt_outer_before " << cnt_outer_before << " cnt_outer_after " << cnt_outer_after << " cnt_inner " << cnt_inner << endl;
    cout << endl;
}

// Sieve of Eratosthenes Algorithm
/*
    Time Complexity O(n log log n)
*/
/*
    Above approch needs extra loop for traversing array to print number
    So instead of traversing till sqrt of number in first loop , now we traverse till n
    and print the number at the time of checking
*/
void printPrimeNumbers_Optimization3(int n)
{
    vector<bool> isPrime(n + 1, true);

    if (n <= 1)
    {
        cout << "No Prime numbers in range till" << n << endl;
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }

    cout << endl;
}
int main()
{
    int n = 2500;
    cout << "Prime numbers in range " << n << " are : ";
    printPrimeNumbers_Eratosthness(n);
    return 0;
}