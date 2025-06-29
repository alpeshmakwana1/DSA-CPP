#include<iostream>
using namespace std;

void moveAllElementToEnd(int arr[], int size) {
    // int nptr = 0, pptr = 1;
    // while (pptr < size) {
    //     if (arr[pptr] < 0) {
    //         pptr++;
    //     }
    //     else {
    //         if (arr[nptr] < 0) {
    //             swap(arr[nptr], arr[pptr]);
    //         }
    //         else {
    //             nptr++;
    //         }
    //     }
    // }

    int i = 0; // Pointer for positive elements
    for (int j = 0; j < size; j++) {
        if (arr[j] > 0) {
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveAllElementToEnd(arr, n);
    printArray(arr,n);

    return 0;
}