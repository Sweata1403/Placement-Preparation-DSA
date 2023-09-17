#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Recursion in Fibonacci Series

int f(int n){
    if(n<=1){
        return n;
    }
    else{
        int last = f(n-1);
        int slast = f(n-2);
        return last+slast;
    }
}
int main(){
    cout<<f(4);
    return 0;
}