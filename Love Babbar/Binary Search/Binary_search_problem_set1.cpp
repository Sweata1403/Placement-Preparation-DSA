#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// First and Last Position of an Element In Sorted Array
// Problem Statement:
// You have been given a sorted array/list 'ARR'
// consisting of 'N' elements. You are also given an
// integer 'K'.
// Now, your task is to find the first and last occurrence
// of 'K' in 'ARR'.

int firstOccurrence(int arr[], int n, int key){
    int s = 0, e =n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    
    while (s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key>arr[mid]){
            //Right me jao
            s = mid + 1;


        }
        else if(key<arr[mid]){
            //Left Me jao
            e = mid - 1;

        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int lastOccurrence(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    
    while (s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if(key>arr[mid]){
            //Right me jao
            s = mid + 1;


        }
        else if(key<arr[mid]){
            //Left Me jao
            e = mid - 1;

        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[8]={1,2,3,3,3,3,4,5};
    cout<<"First Occurrence of 3 is at index: "<<firstOccurrence(even, 8, 3)<<endl;
    cout<<"Last Occurrence of 3 is at index: "<<lastOccurrence(even, 8, 3)<<endl;
    return 0;
}