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
void doSomething(string s){
    s[0]='Z';
    cout<<s<<endl;
}

int main(){
    string s= "Sweata";
    doSomething(s);
    cout<<s<<endl;
    return 0;
}