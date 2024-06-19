#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10) ;
    v.push_back(20) ;
    v.push_back(30) ;
    v.push_back(40) ;
    v.push_back(50) ;
    
    v.clear();
    cout<< v.size() <<endl ;        // 0
    for(int i=0 ; i<v.size(); i++){ // i< v.size() -> [0<0 ] false
        cout<< v[i]<< " " ;         // NO OUTPUT
    }

    cout <<endl <<v[0] <<" "<< v[1] <<" "<<v[2] <<" "<< v[3] <<" "<<v[4] <<endl ;
    //cout << v[6] << endl ; //0

    for(int i=0 ; i<5; i++){ 
        cout<< v[i]<< " " ;         // NO OUTPUT
    }


    //---------------v.empty() function------------
    cout<< endl ;
    vector<int> v2;
    v2.push_back(121) ;
    v2.push_back(122) ;
    v2.push_back(123) ;
    
    v2.clear() ;
    (v2.empty())? cout<<"Vector Empty" <<endl : cout<<"Vector NOT Empty" <<endl ;


    return 0 ;
    
}