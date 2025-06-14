#include <iostream>
using namespace std;

// Naive Approach
/*
    Time Complexity Θ(n)
    Space Comlexity O(1)
*/
int abc = 0 ;
int pow(int n, int p)
{
    if (n == 0)
        return 0;
    int res = 1;
    for (int i = 0; i < p; i++)
    {
        res *= n;
    }
    return res;
}


// Optimized Approach
/*
    Time Complexity Θ(log n)
    Space Comlexity O(1)
*/
int pow1(int n, int p)
{
    abc++ ;
    if (n == 0)         //If number is 0 return 0 ,irrespective of power
        return 0;

    if (p == 0)         //0 Power of any number is 1
        return 1;

    int temp = pow1(n, p / 2);

    temp = temp * temp;

    if (p % 2 == 0)
        return temp;
    else
        return temp * n;
}


/*
    Time Complexity: O(log y), since in loop each time the value of y decreases by half it’s current value.
    Auxiliary Space: O(1), since no extra space has been taken.
*/
int power_Iterative(int x, int y)
{
    int res = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            res = res * x;
        }
        y = y >> 1;
        x = x * x;
    }
    return res;
}

int main()
{
    // cout << "Power is " << power_Iterative(3, 3) << endl;
    cout << "Power is " << pow1(3, 2) << endl;
    cout << "abc" << abc << endl ;
    return 0;
}