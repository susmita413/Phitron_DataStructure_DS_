//  You need to determine whether the stack and queue 
//are the same or not based on the order in which the elements are removed.

#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    queue<int> qu;
    int n,m;
    int x;
    cin>>n ;
    cin>>m ;
    for(int i=1; i<=n; i++){
        cin>> x;
        st.push(x);
    }
    for(int i=1; i<=m; i++){
        cin>> x;
        qu.push(x);
    }

    bool flag= true;
    while(true){
        if(n !=m){
            flag = false;
            break;
        }
        if(qu.empty() && st.empty()){
            break;
        }
        if(qu.front()== st.top()){
            qu.pop();
            st.pop();
        }
        else{
            flag= false;
            break;
        }
    }
    if(flag == true) cout<<"YES" << endl;
    else cout<<"NO" << endl;

    return 0 ;
}