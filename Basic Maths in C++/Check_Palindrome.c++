// CodeStudio Coding Ninjas question
//Check Palindrome Number:

// Problem Statement:
// Write a program to determine if given number is palindrome or not. Print true if it is
// palindrome, false otherwise.
// Palindrome Are The Numbers For Which Reverse Is Exactly Same As The Original
// One. For Eg. 121

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int revNum=0;
    int dup=n;
    while(n>0){
        int lastDigit=n%10;
        revNum=(revNum*10)+lastDigit;
        n=n/10;

    }
    if(dup==revNum){
        cout<<"True";
    }
    else{
            cout<<"False";
        }

}