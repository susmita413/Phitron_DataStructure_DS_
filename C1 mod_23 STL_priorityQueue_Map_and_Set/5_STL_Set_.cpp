#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n ;
    set<int> s; //follows Binary search tree= sorted and no duplicate
    while(n--){
        int x;
        cin>>x ;
        s.insert(x);  //insert // O(logN)
    }
    
    for(auto it= s.begin(); it!=s.end(); it++){
        //'it' points to a node serial by serial
        cout<< *it << " " ;  //print- sorted in Ascending
                             //No Duplicate value
    }
    cout<<endl;
    
    //EXISTENCE of a value
    cout<<"existence of 1000= "<<s.count(1000) <<endl; //1 or 0
    if(s.count(1000)) cout<<"yes" <<endl;
    else cout<<"no" <<endl;

    return 0 ;
}