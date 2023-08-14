#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// pattern 2: print---> 12345
//                      1234
//                      123
//                      12
//                      1
void pattern6(int N){
    for(int i=0; i<N; i++){
        for(int j=N; j>i; j--){
            cout<<N-j+1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int N=5;
    pattern6(N);
    return 0;
}