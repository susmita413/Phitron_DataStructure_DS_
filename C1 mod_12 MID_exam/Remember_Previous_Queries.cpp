#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> mylist;
    int q,x,v ;
    cin>> q ;
    for(int i=1; i<= q ; i++){
        cin>> x >> v ;
        if(x==0){
            mylist.push_front(v);
        }
        else if(x==1){
            mylist.push_back(v);
        }
        else if(x==2){
            int sz= mylist.size() ;
            if(v< sz){
                mylist.erase( next(mylist.begin(),v) ) ;
            }
        }
        
        cout<<"L -> " ;
        for(int x: mylist){
            cout<< x <<" " ;
        }
        cout<< endl << "R -> ";
        
        int sz= mylist.size() ;
        if(sz != 0){
            for(auto it =next(mylist.begin(),sz-1); it != mylist.begin(); it--){
                cout<< *it <<" " ;
            }
            cout<<mylist.front() ;
        }
        cout<< endl; 

    }

    return 0 ;
}
 