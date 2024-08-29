#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> mylist = {1,2,3,4,5,6};

    //1. 1 value insert
    mylist.insert(next(mylist.begin(),2) , 100);  //index 2te insert hobe
    mylist.insert(next(mylist.begin(),5) , 200) ;
    for(int x: mylist){
        cout<< x <<" " ;
    }
    cout<< endl ;

    //2. multiple value insert
    // mylist.insert( next(mylist.begin(),3) , {100,200,300,400}) ; 
    // // index 3 te insert hobe
    // for(int x: mylist){
    //     cout<< x <<" " ;
    // }
    cout<< endl ;


    //3. list theke insert
    list<int> nwlist = {20,30,40,50} ;
    //mylist.insert( next(mylist.begin(),4) , nwlist.begin(), nwlist.end()) ;
    //mylist.insert( next(mylist.begin(),4) , next(nwlist.begin(),1), next(nwlist.begin(),3) ) ;
                                        //"nwlist" er index=1,2er value insert hobe
    // mylist.insert( next(mylist.begin(),4) , next(nwlist.begin(),1), next(nwlist.end()) ) ;
    //                                 //"nwlist" er index=1 theke laster value insert hobe
    // for(int x: mylist){
    //     cout<< x <<" " ;
    // }
    cout<< endl ;


    //4. vecotr theke insert
    vector<int> v= {100,200,300};
    // mylist.insert( next(mylist.begin(),2) , v.begin(), v.end() ) ;
    //                 //puro vector insert hobe
    // for(int x: mylist){
    //     cout<< x <<" " ;
    // }
    cout<< endl ;


    return 0 ;
}