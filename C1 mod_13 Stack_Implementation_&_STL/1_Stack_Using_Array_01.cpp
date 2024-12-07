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
            if(v.size()==0)return true ; // Yes,Empty
            else return false ;          // No,Not Empty
        }

};


int main(){
    myStack st;
    st.push(10);
    st.push(20);
    cout<<"Top: " << st.top()<< endl ;
    cout<< "size: " << st.size() << endl << endl ;
    st.pop();

    cout<<"Top: " << st.top()<< endl ;
    st.pop();

    //cout<<"Top: " << st.top()<< endl ;

    if(st.empty()==false){  // Not Empty
        cout<<"Top: " << st.top()<< endl ;
    }
    else{
        cout<<"Stack Empty " << endl ;
    }


    return 0 ;
}