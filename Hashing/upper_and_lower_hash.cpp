#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// We have 256 characters in total in this case. So, we will create a 
// hash array of size 256. We will not subtract anything from the given 
// character and will use the character as it is, to access the hash 
// array while pre-storing and fetching. For pre-storing hash[s[i]] += 1 
// and for fetching we will use hash[character] only. The rest of the 
// process will be exactly the same as in the number hashing.

// Note: The case 3 method also applies to case 1 and case 2. In character 
// hashing, the limit will not cross 256 and so we will always use this method.

int main(){
    string s;
    cin>>s;

    //precompute
    int hash[256]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while (q--){
        char c;
        cin>>c;
        //fetch:
        cout<<hash[c]<<endl;
    }
    return 0;
}