// find 'V'
// find( v.begin() , v.end() , V )  ->return Iterator

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v= {1,2,2, 10, 5,4, 6,4, 3 ,10} ;
    //vector<int>:: iterator it ;
    auto it = find(v.begin() , v.end() ,1011 ) ;

    //cout << *it << endl ;  //10
    
    if(it == v.end() ) cout <<" Not Found" << endl ;  
    else cout <<" Found" << endl ;

    return 0 ;
    
}