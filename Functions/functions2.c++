#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Functions are set of code which performs somthing for you
//functions are used to modularise code
//functions are used to increase readability
//Functions are used to use same code multiple times
//types of functions:
//void-> which does not returns anything
//return
//parametrised
//non parameterised

//take two numbers and print its sum
int sum(int num1, int num2){
    int num3=num1+num2;
    return num3;
}

int main(){
    int num1, num2;
    cin>>num1>>num2;
    int res= sum(num1, num2);
    cout<<res;

    return 0;
}