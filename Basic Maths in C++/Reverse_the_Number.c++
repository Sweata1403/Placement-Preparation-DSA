// CodeStudio Coding Ninjas question
//Reverse the number:

// Problem Statement

// Write a program to generate the reverse of a given
// number N. Print the Porresponding reverse number.
// Note: I A Number Has Trailing Zeros, Then Its
// Reverse Will Not Include Them. For E.G., Reverse Of
// 10400 Will Be 401 Instead Of 00401.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int revNum=0;
    while(n>0){
        int lastDigit=n%10;
        revNum=(revNum*10)+lastDigit;
        n=n/10;
    }
    cout<<revNum;
}