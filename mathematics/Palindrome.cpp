#include <iostream>
bool checkPalindrome(int n) {
    int reverse = 0;
    int temp = n;
    while (temp != 0) {
      reverse = (reverse * 10) + (temp % 10); 
      temp = temp / 10; 
    }
    return reverse == n; 
}
  
int main() {
    const int n = 4554;
  if (checkPalindrome(n)) {
        std::cout << "Yes" << std::endl;
  } else {
        std::cout << "No" << std::endl; 
  }
    return 0;
}