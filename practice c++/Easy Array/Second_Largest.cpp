// Given an array Arr of size N, print the second largest distinct element from an array. If the second largest element doesn't exist then return -1.

// Example 1:

// Input: 
// N = 6
// Arr[] = {12, 35, 1, 10, 34, 1}
// Output: 34
// Explanation: The largest element of the 
// array is 35 and the second largest element
// is 34.
// Example 2:

// Input: 
// N = 3
// Arr[] = {10, 5, 10}
// Output: 5
// Explanation: The largest element of 
// the array is 10 and the second 
// largest element is 5.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function print2largest() which takes the array of integers arr and n as parameters and returns an integer denoting the answer. If 2nd largest element doesn't exist then return -1.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 2 ≤ N ≤ 105
// 1 ≤ Arri ≤ 105

#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int first= INT_MIN;
	    int second= INT_MIN;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]>first){
	            second=first;
	            first=arr[i];
	        }
	        else if(arr[i]>second && arr[i]< first){
	            second = arr[i];
	        }
	    }
	    if(second == INT_MIN){
	        return -1;
	    }
	    return second;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}