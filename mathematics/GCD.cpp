#include<iostream>
using namespace std;

//Naive approach
/*
Complexity:
    Time: O(min(a,b)) → Slow for large numbers (e.g., a=1e9, b=1e9-1).
    Space: O(1).
*/
int naiveGCD(int a, int b) {
    int res = min(a, b);
    while (res > 0) {
      if (a % res == 0 && b % res == 0) {
        return res;
      }
      res--;
    }
    return res;
}

//Efficient Approach
/*
    Time: O(log(min(a,b))) - Very efficient
    Space: O(log(min(a,b))) - Due to recursion stack
*/

int euclideanGCD(int a, int b) {
    if (b == 0) return a;
    return euclideanGCD(b, a % b);
}

/*
    Time: O(log(min(a,b))) - Very efficient
    Space: O(1) - Due to recursion stack
*/
int iterativeGCD(int a, int b) {
    while (b != 0) {
        //   int temp = a;
        //   a = b;
        //   b = temp % b; // Swap and compute remainder
        
        a = a % b ;
        std::swap(a, b); 
    }
    return a;
}

int main(){
    int a = 100;
    int b = 18;
    cout << "GCD of " << a << " and " << b << " is: " << euclideanGCD(a, b) << endl;

    return 0;
}