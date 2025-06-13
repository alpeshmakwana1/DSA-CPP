#include<iostream>
#include<math.h>

using namespace std ;

/*This approach calculates the number of digits 
in the factorial of N without actually calculating the factorial. 
We can use the fact that the number of digits in the factorial of N is equal to the sum of the 
logarithms of all numbers from 1 to N, rounded down to the nearest integer, plus 1.
*/

int digitsInFactorial(int N) {
    double sum = 0;
    for(int i = 2; i <= N; i++) {
        sum += log10(i);
    }
    return (int)sum + 1;
}


int main(){
    int N = 10000; 
    int result = digitsInFactorial(N);
    cout << "The number of digits in the factorial of " << N << " is: " << result << endl;
    
    return 0;
}