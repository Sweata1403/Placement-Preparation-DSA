#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//1D array
int main(){
    // int a,b,c,d;
    // cin>>a>>b>>c>>d;
    //in array 
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    arr[3] +=10; //add operation is used to modify this array
    arr[2]=16; //here this array will replace its value to 16
    cout<<arr[3];
    return 0;
}