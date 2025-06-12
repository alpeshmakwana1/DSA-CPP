#include<iostream>
using namespace std;

//Naive approach
//Time Complexity: Θ(n)(n function calls)
//Space Complexity: O(1)
int factorialIterative(int n){
    if(n == 0 || n == 1)
        return 1 ;
    
    int result = 1 ;
    while (n > 1)
    {
        result *= n ;
        n-- ;
    }

    return result ;
    
}

//Recursive Solution
//Time Complexity: Θ(n)(n function calls)
//Space Complexity: O(n) (Due to call stack)
int factorialRecusrsive(int n){
    if(n == 0 || n == 1)
        return 1 ;
    
    return n * factorialRecusrsive(n-1);
}


//Trailing Recursive Solution
//Time Complexity: Θ(n)(n function calls)
//Space Complexity: O(n) (Due to call stack)
int factorialTrailingRecusrsive(int n , int accumulator = 1){
    if(n == 0 || n == 1)
        return accumulator ;
    
    return factorialTrailingRecusrsive(n-1, n*accumulator);
}
int main(){
    cout << "factorial : "<< factorialIterative(5) << endl ;
    cout << "factorial : "<< factorialRecusrsive(5) << endl ;
    cout << "factorial : "<< factorialTrailingRecusrsive(5) << endl ;
    return 0;
}