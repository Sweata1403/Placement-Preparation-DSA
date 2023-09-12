// Reverse a given Array

// Problem Statement: You are given an array. The task is to reverse the array and print it. 

// Solution 1: Using one pointer only

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void f(int i, int arr[], int n){
//     if(i>=n/2){
//         return;
//     }
//     else{
//         swap(arr[i], arr[n-i-1]);
//     }
//     f(i+1, arr, n);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     f(0, arr, n);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }


// Solution
// Disclaimer: Don’t jump directly to the solution, try it out yourself first.

// Solution 2: Using an extra array.

// Approach: Declare an array,ans[] of the same size as the input array. 
// Iterate from the back of the input array while storing the elements 
// in ans[]  in opposite direction.


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// //Function to Print array
// void printArray(int ans[], int n){
//     cout<<"The reversed array is: "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }
// }
// //Function to reverse array using auxiliary array
// void reverseArray(int arr[], int n){
//     int ans[n];
//     for(int i=n-1; i>=0; i--){
//         ans[n-i-1]=arr[i];
//     }
//     printArray(ans, n);
// }
// int main(){
//     int n=5;
//     int arr[]={5,4,3,2,1};
//     reverseArray(arr, n);
//     return 0;
// }

// Solution 2: Space-optimized iterative method

// Approach: Unlike the previous method we use the same array to obtain the result. Follow the steps below.

// Keep a pointer p1  at the first index and another p2 at the last index of the array. 
// Swap the elements pointed by p1 and p2, Post swapping increment p1 and decrement p2.
// This process is repeated for only the first n/2 elements where n is the length of array.
// Note: Swapping all the n elements instead of n/2 elements leaves the array unaltered.

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// //function to print array
// void printArray(int arr[], int n){
//     cout<<"The reversed array is: "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// //function to reverse array
// void reverseArray(int arr[], int n){
//     int p1=0, p2=n-1;
//     while(p1<p2){
//         swap(arr[p1], arr[p2]);
//         p1++, p2--;
//     }
//     printArray(arr, n);
// }
// int main(){
//     int n=5;
//     int arr[]={5,4,3,2,1};
//     reverseArray(arr, n);
//     return 0;
// }


// Solution 3: Recursive method

// Approach: The recursive method has an approach almost similar to the iterative one. 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//function to print array
void printArray( int arr[], int n){
    cout<<"The reversed array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
//function to reverse array using recursion
void reverseArray(int arr[], int start, int end){
    if(start<end){
        swap(arr[start], arr[end]);
        reverseArray(arr, start+1, end-1);
    }
}
int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    reverseArray(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}
