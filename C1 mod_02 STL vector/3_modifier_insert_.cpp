// v.insert(v-Vector start pointer, value)
// v.insert(v-Vector startPointer, v2-Vector startPointer, v2-Vector endNextPointer)
//

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v= {1,2,3,4,5} ;
    v.insert( v.begin()+3 , 10) ;     //One value insert 
    //v.insert( v.begin()+5 ,10) ;      // insert in last index
    //v.insert(v.end() , 20) ;          // insert in last index
    //v.insert( v.end()-2, 20) ;

    for(int val: v){
        cout << val <<" " ;
    }

    vector<int> v2 = {1,2,3,4,5}; 
    vector<int> v3 = {101,102,103,104} ;  //Multiple value insert
    //v2.insert( v2.begin()+2, v3.begin(), v3.end() ) ;
                                          // insert Full v3 Vector
    v2.insert(v2.begin()+2, v3.begin()+1, v3.end()-1 ) ;
    //v3-Vector er begin()+1 theke end()-1 er age porjonto insert hobe ->102 103

    cout<<endl <<endl ;
    for(int val: v2){
        cout << val <<" " ;
    } // 1 2 102 103 3 4 5 (2nd type)


    return 0 ;
}