#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    const int sizeOfArray = 8;
    int arr[sizeOfArray] = {1, 2, 3, 0, 0, 0, 4, 5};

    int count = 0;
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] != 0)
            arr[count++] = arr[i];
    }

    for (int i = count; i < sizeOfArray; i++)
    {
        arr[i] = 0;
    }
    printArray(arr, sizeOfArray);
    return 0;
}