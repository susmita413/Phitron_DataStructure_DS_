// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
// Given a string S. Determine how many times does each letter occurred in S.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s) ;
    // cin>>s ;
    vector<int> frq(26,0) ;
    for(int i=0; i<s.size(); i++){
        //int l = int(s[i]-'a')  ;
        int l = s[i]-'a' ;
        frq[l]++ ;
    }

    for(int i=0; i<26; i++){
        if(frq[i] != 0){
            char x = i + 'a' ;
            cout<< x <<" : " << frq[i] << endl ;
        }  
    }

    return 0 ;
}