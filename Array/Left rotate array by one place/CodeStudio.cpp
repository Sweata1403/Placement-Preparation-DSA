#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//CODE STUDIO
// Problem Statement: Rajesh loves Supriya and wants to propose to Supriya but Supriya
// is an Array lover and asked Rajesh a problem which is as follows:-
// Given an array "ARR' containing 'N' elements, rotate this array Left
// by once means to shift all elements by one place to the left and
// move the first element to the last position in the array.
// As Rajesh is very bad at array he asks you to help him as he loves
// her so much.

vector<int> rotateArray(vector<int> &arr, int n){
    int temp=arr[0];
    for(int i=1; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}