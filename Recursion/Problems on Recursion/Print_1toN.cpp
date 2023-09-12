#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Problem:
// Print 1 to N using Recursion

void func(int i, int n){
    //Base Condition
    if(i>n){
        return;
    }
    cout<<i<<endl;
    //function call to print i till i increments to n
    func(i+1, n);
}
int main(){
    //here, lets take the value of n to be 4
    int  n=4;
    func(1,n);
    return 0;
}