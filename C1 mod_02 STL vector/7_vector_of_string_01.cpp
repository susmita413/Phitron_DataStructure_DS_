#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n =5 ;
    vector<string> v;
    for(int i=0; i<n; i++){  // input string without space
        string s;
        cin>> s ;
        v.push_back(s) ;
    }
    
    // vector<string> v(n);
    // for(int i=0; i<n ; i++){
    //     cin >> v[i] ;
    // }
    
    cout<<endl ;
    for(string val: v){
        cout<<val <<endl ;
    }

    return 0 ;
}
/*
sakib
RAKIB
SUSMI
nidhi
akib
*/