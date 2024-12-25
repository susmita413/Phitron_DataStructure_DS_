// Take a stack of size N and a queue of size M as input. Then check if
//both of them are the same or not in the order of removing.

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    stack<int> st;
    queue<int> q;

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x ;
        st.push(x);
    }
    int m; cin>>m;
    for(int i=0; i<m; i++){
        int x;
        cin>>x ;
        q.push(x);
    }

    bool flag = true;
    if(st.size() != q.size()){  // not same size
        flag = false;
    }
    else{
        while(!st.empty() && !q.empty()){
            if(st.top() != q.front()){ 
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    cout<<((flag==true) ? "Yes Same" : "No NOt same") << endl;

    return 0 ;
}

// order of removing same list (reverse list)--
// stack : 10 20 30 40 50
// queue: 50 40 30 20 10