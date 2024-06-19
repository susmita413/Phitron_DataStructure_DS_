#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> x= {10,20,30};
    for(int i=0; i<x.size() ; i++){
        cout << x[i]<< " " ;
    }

    x.push_back(70);   // add element to the end
    x.push_back(80);
    x.push_back(90) ;
    x.push_back(100);
    cout<<endl ;
    for(int i=0; i<x.size() ; i++){
        cout << x[i]<< " " ;
    }

    x.pop_back();      // remove last element
    x.pop_back();
    cout<<endl ;
    for(int i=0; i<x.size() ; i++){
        cout << x[i]<< " " ;
    }


    return 0 ;
}