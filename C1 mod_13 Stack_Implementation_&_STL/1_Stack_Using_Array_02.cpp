#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
        vector<int> v ; // Using Dynamic array for purpose
        void push(int val){
            v.push_back(val);
        }
        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }

        int size(){
            return v.size();
        }
        bool empty(){
            if(v.size()==0)return true ;
            else return false ;
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

    while(st.empty() == false){ //Loop will continue till Stack Empty
        cout<< st.top()<< endl ;
        st.pop();
    }


    return 0 ;
}