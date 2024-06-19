// v.erase( 1 pointer) // one value erase
// v.erase( st pointer, end+1 pointer )  // Multiple value erase

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v= {1,2,3,4,5,6,7,8,9,10,11} ;
    //v.erase( v.begin()+3) ;           // one value erase

    for(int val : v){
        cout<< val << " " ;
    }

    //v.erase( v.begin()+2, v.begin()+6) ; // multiple value erase
                                           //index 2-5 erase
    v.erase( v.begin()+2, v.end()-1 ) ;    // index 2-9 erase

    cout<<endl<< endl ;
    for(int val : v){
        cout<< val << " " ;
    }


    return 0 ;
}