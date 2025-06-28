#include<iostream>
#include <vector>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> nums(nums1.size()+ nums2.size());
    int i = 0 , j = 0 ;
    int k = 0 ;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] <= nums2[j]){
            nums[k++] = nums1[i++];
        }else{
            nums[k++] = nums2[j++];
        }
    }

    for(; i< nums1.size(); i++){
        nums[k++] = nums1[i];
    }
    for(; j< nums2.size(); j++){
        nums[k++] = nums2[j];
    }

    if( k%2 == 0){
        return ((double)nums[k/2-1]+nums[k/2])/2;
    }else{
        return nums[k/2]; 
    }
}

int main(){
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};
    cout << findMedianSortedArrays(nums1, nums2)<< endl ;
    return 0;
}