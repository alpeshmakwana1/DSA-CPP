#include <iostream>
using namespace std;

bool isLucky(int n, int cnt = 2) {
    if(cnt > n){
        return 1 ;   //Base case survives all
    }
    if(n % cnt == 0)
        return 0 ;      //Number is elemenated
    int new_n = n - n/cnt ;
    
    return isLucky(new_n , cnt+1);
    
}
int main()
{
    cout << isLucky(19) << endl;
    return 0;
}