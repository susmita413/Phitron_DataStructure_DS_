#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(10) ;
    v.push_back(20) ;
    v.push_back(30) ;
    v.push_back(40) ;
    v.push_back(50) ;
    
    cout<< v.size() <<endl ;        // 5
    for(int i=0 ; i<v.size(); i++){
        cout<< v[i]<< " " ;         // 10 20 30 40 50
    }

    v.resize(2) ;
    cout<<endl << v.size() <<endl ;   //2
    for(int i=0 ; i<v.size(); i++){  
        cout<< v[i]<< " " ;           //10 20 
    }
    
    v.resize(5) ;
    cout<<endl << v.size() <<endl ;   //5
    for(int i=0 ; i<v.size(); i++){  
        cout<< v[i]<< " " ;           //10 20 0 0 0 
    }                                 // extra 3ta value=0 rakhbe

    v.resize(9, 123) ;
    cout<<endl << v.size() <<endl ;   //9
    for(int i=0 ; i<v.size(); i++){  
        cout<< v[i]<< " " ;           //10 20 0 0 0 123 123 123 123 
    }                 
    // ager value te (even value=0 teo) change korbena
    // extra (9-5)=4 ta value te 123 rakhbe .


    return 0 ;
}