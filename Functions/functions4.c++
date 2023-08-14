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

int maxx(int num1, int num2){
    //5>=6
    if(num1>=num2){
        return num1;        //does not get executed
    }

    return num2;
    //looking for a return line
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
    int maximum =maxx(num1, num2);
    cout<<maximum;

    return 0;
}