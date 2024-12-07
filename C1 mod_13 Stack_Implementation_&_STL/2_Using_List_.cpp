#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
        list<int> l ;
        void push(int val){
            l.push_back(val) ;
        }    
        void pop(){
            l.pop_back();
        }
        int top(){
            return l.back() ;
        }
        int size(){
            return l.size();
        }

        bool empty(){
            if(l.size()==0) return true ; // Yes,Empty
            else return false;  // No,Not Empty
        }
};


int main(){
    myStack st;
    
    int n; cin>> n ; // 'n' number of stack value

    for(int i=1; i<=n ; i++){
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