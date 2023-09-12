#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Problem: Sum of N numbers using parameterised recursion way
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}
int main(){
    int n=3;
    cout<<sum(n);
    return 0;
}