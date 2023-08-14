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
void printName(string name){
    cout<<"Hey "<<name<<endl;
}
int main(){
    string name;
    cin>>name;
    printName(name);
    

    string name2;
    cin>>name2;
    printName(name2);

    return 0;
}