#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n =5 ;
    //vector<string> v;
    // for(int i=0; i<n; i++){  // input string with space
    //     string s;
    //     getline(cin,s) ;
    //     v.push_back(s) ;
    // }
    
    vector<string> v(n);
    for(int i=0; i<n ; i++){
        getline(cin, v[i] ) ;
    }
    
    cout<<endl ;
    for(string val: v){
        cout<<val <<endl ;
    }

    return 0 ;
}
/*
susmi paul
rina akter
tina roy
bristy barua
ping pong 
*/