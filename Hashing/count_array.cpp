#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Size of the array = 5
//array[]= [1,3,2,1,3]
//I will give 5 queries to find 
//How many times 1 appears?
//How many times 4 appears?
//How many times 2 appears?
//How many times 3 appears?
//How man times 12 appears?

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    //pre compute
    int hash[13]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]] +=1;

    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }

    return 0;
}