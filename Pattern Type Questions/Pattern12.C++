#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// pattern 12: print ---> 1      1
//                        12    21
//                        123  321
//                        12344321
void pattern12(int N){
    // initial no. of spaces in row 1.
    int space=2*(N-1);
    // Outer loop for the number of rows.
    for(int i=1; i<=N; i++){
        // for printing numbers in each row
        //numbers
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        // for printing spaces in each row
        //space
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        // for printing numbers in each row
        //numbers
         for(int j=i; j>=1; j--){
            cout<<j;
            
        }
        // As soon as the numbers for each iteration are printed, we move to the
        // next row and give a line break otherwise all numbers
        // would get printed in 1 line.
        cout<<endl;
        // After each iteration nos. increase by 2, thus
        // spaces will decrement by 2.
        space -=2;
    }
}

int main(){
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N;
    cin>>N;
    pattern12(N);
    return 0;
    
}