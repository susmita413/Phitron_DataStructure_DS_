#include<bits/stdc++.h>
using namespace std;

int main(){
    //vector<int> V ; //type1
    //vector<int> V(5) ; //type2
    // vector<int> V(5,12) ; //type3

    vector<int> v2(6,123) ;  //type4
    vector<int> V(v2) ;

    // int a[5] ={3,4,5,6,7} ;  // type5
    // vector<int> V(a, a+5) ;

    //vector<int> V={11,12,13,14,15} ; // INITIALIZE
    // V[7] =5 ;       // no effect //error
    // V[6] =6 ;       // no effect //error


    for (int i=0; i<V.size(); i++){
        cout << V[i] <<" " ;
    }
    cout<<endl << V.size() << endl ;
 
    return 0 ;
}