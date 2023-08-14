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

//pass by reference
void doSomething(int arr[], int n){
    arr[0]+=100;
    cout<<"Value inside function: "<<arr[0]<<endl;
}

int main(){
    int n=5;
    int arr[n];

    for(int i=0; i<=n; i=i+1){
        cin>>arr[i];
    }
    doSomething(arr, n);    
    cout<<"Value inside function: "<<arr[0]<<endl;
    return 0;
}   