// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// //Problem: Print N to 1 using backtracking

// void func(int i, int n){
//     //Base Condition
//     if(i>n){
//         return;
//     }
//     //Function call to print (n-1) integers
//     func(i+1,n);
//     cout<<i<<endl;
    
// }
// int main(){
//     //Here, let's take the value of n to be 4
//     int n;
//     cin>>n;
//     func(n,n);
//     return 0;
// }

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n, i = 1;
void f(int x,int y);
void f(int i,int n)
{
    if(i>n) return;
    f(i+1,n);
    cout<<i<<endl;
}

int main()
{
    cin>>n;
    f(i,n);
    return 0;
}