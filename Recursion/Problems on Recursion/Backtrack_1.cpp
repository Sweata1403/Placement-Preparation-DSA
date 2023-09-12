#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Problem: Print Linearly from 1 to N  using backtracking

// This is an alternative approach for printing the integers from 1 to N using recursion. 
// In the previous approach, we used forward recursion but in this approach, we will be 
// using backward recursion. The only change from the previous approach here will be that 
// the print line would be kept after the function call inside the recursive function 
// contrary to the previous approach. The function would be called for printing (i-1) 
// integers and the nth integer would be printed.

void func(int i, int n){
   
   // Base Condition.
   if(i<1) return;
   
   // Function call to print (n-1) integers.
   func(i-1,n);
   cout<<i<<endl;

}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n = 4;
  func(n,n);
  return 0;

}