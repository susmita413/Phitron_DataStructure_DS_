#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> mylist= {10,20, 30, 40, 30, 60,70, 30,30, 100,90, 30 };
   // replace(mylist.begin(), mylist.end(), 30, 100) ; // index0 to last index check krbe
    
    //replace(next(mylist.begin(),3) , mylist.end(), 30, 100) ; // index3 to last index check krbe
    
    replace(next(mylist.begin(),3) , next(mylist.begin(),8), 30, 100) ;
    for(int x: mylist){
        cout<< x << " " ;
    }
    cout<< endl ;


    return 0 ;
}