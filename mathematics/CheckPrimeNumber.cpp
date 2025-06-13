#include <iostream>
using namespace std;

// Naive Approach
/*
    Time Complexity O(n)
    Space Complexity O(1)

    Limitations:
    This method is very inefficient for large numbers, as the time complexity increases linearly with the value of n.
*/
bool isPrimeNaive(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Efficient Approach
/*
    Time Complexity: O(√n) — We only check up to the square root of n, which is much faster than the naive method.
    Space Complexity: O(1) — The algorithm uses a constant amount of space.
*/
bool isPrimeEfficient(int n)
{
    if (n == 1)
        return false;

    if (n <= 3)
        return true;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

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

int main()
{

    int num = 7;
    bool result = isPrimeMostEfficient(num);
    cout << "Is " << num << " a prime number? " << (result ? "Yes" : "No") << endl;
    return 0;
}