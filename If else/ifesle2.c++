#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
A school has following rules for grading system:
a. Below 25-F
b. 25 to 44 - E
c. 45 to 49- D
d. 50 to 59- C
e. 60 to 79- b
f. 80 to 100- A
Ask user to enter marks and print the corresponding grade
*/

int main(){
    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"Your grade is: F"<<endl;
    }
    else if(marks<=44){
        cout<<"Your grade is: E"<<endl;
    }
    else if(marks<=49){
        cout<<"Your Grade is: D"<<endl;

    }
    else if(marks<=59){
        cout<<"Your grades is :C"<<endl;
    }
    else if(marks<=79){
        cout<<"Your grades is: B"<<endl;
    }
    else if(marks<=100)
    {  
        cout<< "your grades is: A"<<endl;
    }
    return 0;
}