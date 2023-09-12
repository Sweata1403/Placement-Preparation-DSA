#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Problem:
// Print Sweata N times( let say N=5)

void func(int i, int n){
    //Base Condition
    if(i>n){
        return ;
    }
    cout<<"Sweata"<<endl;

    //Function call to print till i increment
    func(i+1, n);
}
int main(){
    //Here, lets take the value of n to be 5
    int n=5;
    func(1,n);
    return 0;
}