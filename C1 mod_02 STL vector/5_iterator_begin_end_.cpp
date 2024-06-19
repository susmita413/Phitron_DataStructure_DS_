// v.begin() , v.end()

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v= {10,20,30,40,50,60,70} ;

    vector<int> ::iterator it ;
    for(it = v.begin() ; it< v.end() ; it++){
        cout << *it << " " ;
    }
    cout<< endl ;

    for( auto it2 = v.begin()+2 ; it2< v.end() ; it2++ ){
        cout << *it2 <<" " ;
    }
    cout<< endl ;

    
    return 0 ;
}