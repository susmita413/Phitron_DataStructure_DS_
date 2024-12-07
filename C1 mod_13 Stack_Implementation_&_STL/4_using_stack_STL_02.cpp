#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st ;
    int n; cin>> n ; // 'n' number of stack value

    for(int i=1; i<=n ; i++){   //# total complexity= O(n)
        int x;
        cin >> x ;
        st.push(x) ;
    }
    cout<< "Top= " << st.top()<< endl ;

    while(!st.empty()){ //Loop will continue till Stack Empty
        cout<< st.top()<< endl ;
        st.pop();
    }


    return 0 ;
}