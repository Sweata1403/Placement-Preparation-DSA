// CodeStudio Coding Ninjas question


// COUNT DIGITS:
//PROBLEM STATEMENT: Given the number 'n'. find out and return the number of digits present in a number
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countDigit(int n){
	    if (n == 0)
		return 1;
	    
	    int count = 0;
	while (n > 0){
		n = n / 10;
		count++;
	}
	return count;
}

int main(){
int n = 213124;
	cout << "Number of digits : " << countDigit(n);
	return 0;
}


// int count(int n){
//     int cnt=0;
//     while(n>0){
//         // int lastDigit=n%10;
//         cnt=cnt+1;
//         // n=n/10;
//     }
//     return cnt;
// }
// int main(){
//     int answer=count(7789);
//     cout<<"hello";    
// }

////another approach to solve this question

//int count(int n){
    // int snt=(int)(log10(n)+1);
    // return int;
// }