#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//CODE STUDIO:
// Problem Statement: Given an array with N elements, the task is to rotate the array to
// the left by K steps, where K is non-negative.

void leftRotate(int arr[], int n, int d){
    d=d%n;
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i]=arr[i];
    }
    for(int i=d; i<n; i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d; i<n; i++){
        arr[i]=temp[i-(n-d)];
    }
}
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftRotate(arr, n, d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}