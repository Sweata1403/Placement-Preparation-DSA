#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Problem Statement: You are given an array of integers, 
// your task is to move all the zeros in the array to the
// end of the array and move non-negative integers to the 
// front by maintaining their order.

vector<int> moveZeroes(int n, vector<int> a){
    //Temporary array:
    vector<int> temp;
    //copy non zero elements
    //from original-> temp array
    for(int i=0; i<n; i++){
        if(a[i]!=0)
            temp.push_back(a[i]);
    }

    //number of non zero elements
    int nz=temp.size();
    //copy elements from temp
    //fill first nz fields of
    //original array
    for(int i=0; i<nz; i++){
        a[i]=temp[i];
    }
    //fill the rest of the cells with zeros:
    for(int i=nz; i<n; i++){
        a[i]=0;
    }
    return a;
}

int main(){
    vector<int> arr={1,0,2,3,2,0,0,4,5,1};
    int n=10;
    vector <int> ans = moveZeroes(n, arr);
    for(auto &it: ans){
        cout<<it<<" ";
    }
    cout<<'\n';
    return 0;
}