#include<bits/stdc++.h>
using namespace std;

bool isItValid(string s){
    stack<char> st;
    for(char x: s){
        if(!st.empty() && (x== '0' && st.top()== '1')){
            st.pop();
        }
        else if(!st.empty() && (x== '1' && st.top()== '0')){
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
        bool valid = isItValid(s) ;

        if(valid ==true) cout<<"YES" <<endl ;
        else cout<<"NO"<< endl ;
    }

    return 0 ;
}