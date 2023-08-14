#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// pattern 2: print---> *
//                      **
//                      ***
//                      ****
//                      *****
void pattern2(int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int N=5;
    pattern2(N);
    return 0;
}