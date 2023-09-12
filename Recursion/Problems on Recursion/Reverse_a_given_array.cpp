// Reverse a given Array

// Problem Statement: You are given an array. The task is to reverse the array and print it. 

// Solution 1: Using one pointer only

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void f(int i, int arr[], int n){
    if(i>=n/2){
        return;
    }
    else{
        swap(arr[i], arr[n-i-1]);
    }
    f(i+1, arr, n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    f(0, arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

