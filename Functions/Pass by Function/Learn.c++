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

//pass by value
void doSomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

int main(){
    int num=10;
    doSomething(num);
    cout<<num<<endl;
    return 0;
}