#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//CODE STUDIO:
// problem statement: Given a sequence of numbers 'ARR'. 
// your task is to return a sorted sequence of 'ARR' in non - descending order
// with the help of merge sort algorithm.

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    //[low..mid]
    //[mid+1..high]
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    }
}

// void mS(vector<int> & arr, int low, int high){
//     if(low==high) return;
//     int mid=(low+high)/2;
//     mS(arr, low, mid);
//     mS(arr, mid+1, high);
//     merge(arr, low, mid, high);
// }
void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}

// void mergeSort(vector < int > & arr, int n) {
//     // Write your code here.
//     mS(arr, 0, n-1);
// }

int main() {

    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}