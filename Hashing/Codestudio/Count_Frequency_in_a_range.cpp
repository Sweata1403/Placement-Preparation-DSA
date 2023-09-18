#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Code Studio: Count frequency of each element in the array
// Problem statement: You are given an array 'arr' of length 'n' containing
// integers within the range '1'to 'x'
// Your task is to count the frequency of all elements
// from 1 to n.

//Using vector
void countFreq(int arr[], int n){
    vector<bool> visited(n , false);
    for(int i=0; i<n; i++){

        //skip this element if already processed
        if(visited[i]==true){
            continue;
        }

        //count frequency
        int count=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
}
int main(){
    int arr[]={10,5,10,15,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}
