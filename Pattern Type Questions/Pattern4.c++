#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// pattern 2: print---> 1
//                      22
//                      333
//                      4444
//                      55555

void pattern4(int N){
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int N=5;
    pattern4(N);
    return 0;
}