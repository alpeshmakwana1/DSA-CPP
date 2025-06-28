#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int arr[n] = {4, 0, 2, 1, 3};

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i]+ (arr[arr[i]] % n)*n;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / n;
    }

    for (int val : arr)
        cout << val << " ";
    cout << endl;

    return 0;
}