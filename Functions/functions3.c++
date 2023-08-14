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


int main(){
    int num1, num2;
    cin>>num1>>num2;
    int minimum =min(num1, num2);
    cout<<minimum;

    return 0;
}