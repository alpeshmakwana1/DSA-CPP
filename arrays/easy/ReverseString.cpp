#include <iostream>
using namespace std;

/*
Problem Statement:
------------------
Write a function to reverse a given string

Approach:
---------
We use two pointers: one starting from the beginning of the string (`i`) and one from the end (`j`).
We swap the characters at these positions and move the pointers towards each other until they meet.
This efficiently reverses the string in-place without using extra space.
*/

string reverseString(string &s)
{
    int i = 0;                  // Pointer starting from the beginning
    int j = s.length() - 1;     // Pointer starting from the end

    // Swap characters until the pointers meet
    while (i < j)
    {
        swap(s[i++], s[j--]);   // Swap and move pointers inward
    }

    return s; // Return the reversed string
}

int main() {
    string s ;
    cin >> s ;

    cout << reverseString(s);

    return 0;
}
