// v=  OR  v.assign(pointer, pointer)

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> x= {10, 20, 30, 40, 50};
    vector<int> v1= {1,2,3,4,5} ;

    v1= x ; //----------------------- O(1)- size same
    for(int val: v1){
        cout<< val <<endl ;
    }

    vector<int> v2 = {101, 102,103} ;
    v2 = x ; //------------------------O(n) -> size of x > size of v2 
    for(int val: v2){
        cout<<endl<< val  ;
    }

    cout<< endl<<endl ;
    vector<int> v3 = {402,403,404,405,406, 407, 408, 409} ;
    //v3 = x ; //------------------------O(n) -> size of x < size of v3 
    v3.assign(x.begin(), x.end());
    for(int val: v3){
        cout<< val <<" " ;
    }

    cout<< endl ;

    return 0 ;
}