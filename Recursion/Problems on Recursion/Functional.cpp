#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Problem: Sum of N numbers using functional recursion way

int func(int n){
    //Base Condition
    if(n==0){
        return 0;
    }
    //Problem is divided into two parts and then combined
    return n+func(n-1);

}
int main(){
    //Here Lets take the value of n to be 3
    int n=3;
    cout<<func(n)<<endl;
    return 0;
}