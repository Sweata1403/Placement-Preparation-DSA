#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Case 2 – If the string contains only uppercase letters:
// In order to get the corresponding value for a character, we will use the following formula:

// corresponding value = given character – ‘A’

// For example, if the given character is ‘f’, we will get the value as (‘F’ – ‘A’) = (70-65) = 5.  
// Here, we can easily observe that the maximum value can be 25. 
// So, for character hashing in this case, we need a hash array of size 26. And while pre-storing 
// we will do hash[s[i]-’A’] += 1 instead of hash[arr[i]] += 1, and while fetching we will do 
// hash[character-’A’] instead of hash[number]. The rest of the methods will be as same as in the 
// case of number hashing.

int main(){
    string s;
    cin>>s;

    //pre compute
    int hash[26]={0};
    for(int i=0; i<s.size();i++){
        hash[s[i]-'A']++;
    }
    
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        //fetch:
        cout<<hash[c-'A']<<endl;
    }
    return 0;
}