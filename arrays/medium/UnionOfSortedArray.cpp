#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    Approach 1 -
    User set to store the element and iterate over the arrays

    Time Complexity O(n*logn)
    logn is time complexity of inserting element into the set

    Space Complexity O(n1+n2);
*/
void unionOfSortedArray_1(vector<int> arr1, vector<int> arr2)
{

    int n1 = arr1.size();
    int n2 = arr2.size();

    set<int> result;

    for (int i : arr1)
    {
        result.emplace(i);
    }

    for (int i : arr2)
    {
        result.emplace(i);
    }

    for (auto i : result)
    {
        cout << i << " " << endl;
    }
}

void unionOfSortedArray_2(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();

    vector<int> result;

    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if(result.size() == 0 || result.back() != arr1[i])
                result.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if(result.size() == 0 || result.back() != arr2[j])
                result.push_back(arr2[j]);
            j++;
        }
    }

    for (; i < n1; i++)
    {
        if(result.size() == 0 || result.back() != arr1[i])
           result.push_back(arr1[i]);
    }

    for (; j < n2; j++)
    {
        if(result.size() == 0 || result.back() != arr1[i])
            result.push_back(arr2[j]);
    }

    for (int a : result)
    {
        cout << a << " " << endl;
    }
}

int main()
{
    vector<int> a1 = {1, 2, 3, 4, 5,5};
    vector<int> a2 = {1, 4, 6,5, 7, 8};

    unionOfSortedArray_2(a1, a2);
    return 0;
}