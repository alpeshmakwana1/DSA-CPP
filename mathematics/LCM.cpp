#include<iostream>
using namespace std;

//Naive Approach
/*
    Time: O(LCM(a,b) - max(a,b)) - Potentially very slow for large numbers
    Space: O(1)
*/
int naiveLCM(int a, int b) {
    int res = max(a, b);
    while (true) {
      if (res % a == 0 && res % b == 0) {
        return res;
      }
      res++;
    }
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

//Efficient Approach
/*
    Time Complexity: O(log(min(a,b)))
*/
int efficientLCM(int a , int b) {
    return (a*b)/iterativeGCD(a,b);
}
int main(){
    int a = 12;
    int b = 15;
    cout << "The LCM of " << a << " and " << b << " is: " << efficientLCM(a, b);

    return 0;
}