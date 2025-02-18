#include<bits/stdc++.h>
using namespace std;

bool elimination(string s){
    stack<char> st;
    for(char x: s){
        if(!st.empty() && (x== '1' && st.top()== '0')){
            st.pop();
        }
        else{
            st.push(x);
        }
    }
    return st.empty();
}

int main(){
    int te;
    cin>> te;
    for(int i=1; i<=te; i++){
        string s;
        cin >>s ;
        bool valid = elimination(s) ;

        if(valid ==true) cout<<"YES" <<endl ;
        else cout<<"NO"<< endl ;
    }
    return 0 ;
}