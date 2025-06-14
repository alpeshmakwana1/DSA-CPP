#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

vector<int> findDuplicateWithFrequency (int n , vector<int> &arr){
    vector<int> freq(n+1,0);
    for(int num : arr){
        freq[num]++ ;
    }

    int missing = -1 , duplicate = -1 ;
    for(int i = 1 ; i <= n ; i++){
        if(freq[i] == 0){
            missing =  i ;
        }else if(freq[i] > 1){
            duplicate = i ;
        }
    }
    return {duplicate, missing};
}

vector<int> findDuplicateAndMissing(int n, vector<int> &arr) {
    long long sum_n = (long long)n * (n + 1) / 2;
    long long sum_sq_n = (long long)n * (n + 1) * (2 * n + 1) / 6;

    long long sum_actual = 0;
    long long sum_sq_actual = 0;

    for (int num : arr) {
        sum_actual += num;
        sum_sq_actual += (long long)num * num;
    }

    long long diff = sum_actual - sum_n;
    long long sq_diff = sum_sq_actual - sum_sq_n;

    long long product = sq_diff / diff;

    int duplicate = (diff + product) / 2;
    int missing = diff - duplicate;


    return {abs(duplicate),abs(missing)};
}

int main() {
    vector<int> arr = {46, 40, 45, 14, 41, 53, 17, 11, 35, 31, 50, 2, 1, 56, 25, 3, 16, 49, 42, 9, 52, 32, 16, 26, 19, 8, 43, 28, 33, 10, 34, 51, 18, 55, 37, 21, 27, 39, 24, 4, 23, 7, 5, 6, 48, 15, 54, 30, 20, 29, 12, 36, 47, 44, 13, 38};
    int n = sizeof(arr) / sizeof(arr[0]);

    // cout << "size" << n << endl ;
    // vector<int> result = findDuplicateAndMissing(56, arr);
    vector<int> result = findDuplicateWithFrequency(56, arr);
    cout << "Duplicate number: " << result[0] << endl;
    cout << "Missing number: " << result[1] << endl;
    return 0;
}