#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// pattern 5: print---> *****
//                      ****
//                      ***
//                      **
//                      *
void pattern5(int N){
    for(int i=0; i<N; i++){
        for(int j=N; j>i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int N = 5 ;
    pattern5(N);
    return 0;
}