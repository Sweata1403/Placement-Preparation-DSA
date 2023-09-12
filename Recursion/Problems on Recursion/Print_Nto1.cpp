#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Problem: Print in terms of N to 1 in reverse order

void func(int i, int n){
    //Base Condition
    if(i<1){
        return;
    }
    //Function call to print (n-1) integers
    cout<<i<<endl;
    func(i-1, n);
    
}
int main(){
    //Here, let's take the value of n to be 4
    int n;
    cin>>n;
    func(n,n);
    return 0;
}