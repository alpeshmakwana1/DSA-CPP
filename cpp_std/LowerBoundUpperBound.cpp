#include <iostream>
#include <vector>
#include <algorithm> // for lower_bound and upper_bound

using namespace std;

int main() {
    vector<int> vec = {1, 3, 3, 5, 7, 9};

    int value = 9;

    auto lower = lower_bound(vec.begin(), vec.end(), value);
    auto upper = upper_bound(vec.begin(), vec.end(), value);

    cout << "Lower bound of " << value << " is : " << *lower << endl;
    cout << "Upper bound of " << value << " is :  " << *upper<< endl;

    cout << "Lower bound of " << value << " is at index: " << (lower - vec.begin()) << endl;
    cout << "Upper bound of " << value << " is at index: " << (upper - vec.begin()) << endl;

    return 0;
}
