#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// pattern 2: print---> A
//                      AB
//                      ABC
//                      ABCD
//                      ABCDE

void pattern14(int N){
    for(int i=0; i<N; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    pattern14(N);
    return 0;
}