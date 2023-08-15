#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// pattern 16: print---> A
//                       B B
//                       C C C
//                       D D D D
//                       E E E E E

void pattern16(int N){
    for(int i=0; i<N; i++){
        char ch= 'A'+i;
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    pattern16(N);
    return 0;
}