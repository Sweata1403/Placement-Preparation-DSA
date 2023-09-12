//Code Studio (coding Ninjas)

// Problem statement:
// You are given an integer array 'A'of size 'N', sorted in
// non-decreasing order. You are also given an integer
// 'target'
// Your task is to write a function to search for 'target'
// in the array 'A' If it exists, return its index in 0-based
// indexing. Otherwise, return - 1.
// Note: You must write an algorithm whose time
// complexity is O(logN).

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target) {
    // Write your code here.
    int n = nums.size();
    int low = 0, high = n - 1;
    while ( low <= high){
        int mid = ( low + high / 2);
        if( nums[mid] == target){
            return mid;
        }
        else if( target > nums[mid] ){
            int low = mid + 1;
        }
        else{
            int high = mid - 1;
        }
        
    }
    
    return -1;
}

int main(){
    int nums[5]={3,8,10,17,1};
    cout<<"target is: "<<search(nums, 5)<<endl;
}