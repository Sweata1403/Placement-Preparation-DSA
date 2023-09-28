#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Code Studio: NINJA AND SORTED ARRAY
// Problem Statement: Ninja is a brilliant student in the class and hence his teacher
// assigned him a problem.
// He has been given an array 'A' of "N° non-negative integers and
// has been asked to check whether the given array is sorted in the
// non-decreasing order or not.
// Your task is to return 1 if the given array is sorted else return 0.

int inSorted(int n, vector<int> a){
    for(int i=1; i<n; i++){
        if(a[i]>=a[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}