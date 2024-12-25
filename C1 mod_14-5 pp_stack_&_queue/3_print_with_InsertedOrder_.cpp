//Take a stack of size N as input and copy those elements to another stack
//to get the values in the order they were inserted and print them.

#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;

    int n; cin>> n ; 
    for(int i=1; i<=n ; i++){   
        int x;
        cin >> x ;
        st.push(x) ;  //10 20 30 40(top) //1st reverse
    }
    
    stack<int> newSt;
    while(!st.empty()){
        newSt.push(st.top()); //40 30 20 10(top) //2nd reverse
        st.pop();
    }

    while(!newSt.empty()){
        cout<< newSt.top() <<" " ;//print:10 20 30 40 //3rd reverse
        newSt.pop();
    }
    cout<< endl;

    return 0 ;
}