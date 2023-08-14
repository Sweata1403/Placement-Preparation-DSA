#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
Take the age from the user and decide accordingly
1. if age<18;
print: not eligible for job,
2. if age>198;
print: eligible for job,
3. if age>=55 and age<=57;
print: eligible for job but retirement soon.
4. if age>57;
print: retirement time.
*/
int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"Not eligible for job"<<endl;
    }
    else if(age<=54){
        cout<<"Eligible for job"<<endl;
    }
    else if(age<=57){
        cout<<"eligible for job but retirement soon."<<endl;
    }
    else (age>57){
        cout<<"retirement time."<<endl;
    }
    return 0;
}