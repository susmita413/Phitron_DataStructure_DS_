// v[i] , v.at(i)
// v.back(), v.front()

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v= {10,20,30,40,50,60,70} ;
    cout<< v[ v.size()-1] <<endl ;   // last element
    cout << v.back() << endl ;       // last element
    cout<< *( v.end()-1 ) <<endl ;   // last element

    cout<<endl ;

    cout << v[0] << endl ;           // first element
    cout<< v.front() << endl ;       // first element
    cout << *(v.begin() ) << endl ;  // first element

    cout<<  v.at(2) << endl ;        // index 2 element
    cout<< endl ;

    for(int i=0 ; i< v.size(); i++){
        cout << v.at(i) <<" " ;
    }

    return 0 ;
}