
// replace( v.begin(), v.end(), value, replace_value )

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v= {1,  2,2, 3,4, 2, 7,5,6,8,  2,2, 7,9,6,  2, 5} ;

    //replace (v.begin(), v.end() ,2, 400 ) ;  //All 2 replaced by 400
    replace(v.begin(), v.end()-7 , 2, 400 ) ;  // end()-7 er age porjonto 
                                               // sob 2 replaced hoyese

    for(int val: v){
        cout << val <<" " ;
    }
    cout<< endl ;


    return 0 ;
}