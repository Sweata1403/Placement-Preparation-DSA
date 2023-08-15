#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// patter 13: print---> 1
//                      2 3
//                      4 5 6
//                      7 8 9 10
//                      11 12 13 14 15
void pattern13(int N){
    int num=1;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    pattern13(N);
    return 0;
}