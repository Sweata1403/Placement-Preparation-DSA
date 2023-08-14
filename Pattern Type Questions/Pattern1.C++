#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// pattern 1: print---> *****
//                      *****
//                      *****
//                      *****
//                      *****
void pattern1(int N){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int N=5;
    pattern1(N);
    return 0;
}