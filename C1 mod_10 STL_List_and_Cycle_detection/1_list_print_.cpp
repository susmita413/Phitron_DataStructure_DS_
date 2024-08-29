#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> list2= {1,2,3,4,5,6,7,8,9,10,11,12};
    //1
    list<int> :: iterator it;
    for(it=list2.begin(); it!= list2.end() ; it++ ){
        cout<< *it << " " ;
    }
    cout<< endl ;

    //2
    for(auto it2=list2.begin(); it2!= list2.end() ; it2++ ){
        cout<< *it2 << " " ;
    }
    cout<< endl ;
    
    //3
    for(int x: list2){
        cout<< x << " " ;
    }
    cout<< endl ;



    return 0 ;
}