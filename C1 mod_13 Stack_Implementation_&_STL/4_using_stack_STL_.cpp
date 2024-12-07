#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <int> st ;
    st.push (10);
    st.push(20);

    cout<<"Top: " << st.top()<< endl ;
    cout<< "size: " << st.size() << endl << endl ;
    st.pop();

    cout<<"Top: " << st.top()<< endl ;
    st.pop();

    //cout<<"Top: " << st.top()<< endl ;

    if(!st.empty()){  // Not Empty
        cout<<"Top: " << st.top()<< endl ;
    }
    else{
        cout<<"Stack Empty " << endl ;
    }


    return 0 ;
}