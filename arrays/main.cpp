
#include <iostream>
#include "array_utils.h"

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array elements: ";
    printArray(arr, size);

    return 0;
}
