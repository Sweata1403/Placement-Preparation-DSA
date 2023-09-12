#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Search In Rotated Sorted Array
// Problem Statement:
// You have been given a sorted array/list 'arr'
// consisting of 'n' elements. You are also given an
// integer 'K'.
// Now the array is rotated at some pivot point
// unknown to you.
// For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating
// 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].
// Now, your task is to find the index at which 'K' is
// present in 'arr'.
int getPivot(vector<int>& arr, int n){

    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){

        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;

    }
    return s;


}
int binarySearch(int arr[], int s,int e,  int key){
    int start=s;
    int end=e;
    int mid=(start+end)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        //go to right wala part
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}


int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot= getPivot(arr, n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarySearch(arr, pivot, n-1,k)
    }
    else{
        return binarySearch(arr, 0, pivot-1, k)
    }
}






