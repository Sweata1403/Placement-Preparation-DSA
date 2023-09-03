#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Question 2:
// Find total no. of occurrence of 3 in the 
// given  array:
// [1,2,3,3,3,3,5]

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
int count(int arr[], int n, int x) {
    // code here
    int first = firstoccurrence(arr,n,x);
	   int last  =  lastoccurrence(arr,n,x);
	   
	   if(first!=-1 and last!=-1) return last-first+1;
	   else 
       return 0;
}