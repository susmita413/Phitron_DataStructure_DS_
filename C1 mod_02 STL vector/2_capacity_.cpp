#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    cout<< v.capacity() << endl ;  //0

    v.push_back(5) ;
    cout<< v.capacity() << endl ; //1

    v.push_back(10) ;
    cout<< v.capacity() << endl ; //2

    v.push_back(20) ;
    cout<< v.capacity() << endl ; //4

    v.push_back(30) ;
    cout<< v.capacity() << endl ; //4
    
    v.push_back(40) ;
    cout<< v.capacity() << endl ; //8

    v.push_back(50) ;
    v.push_back(60) ;
    cout<< v.capacity() << endl ; //8

    v.push_back(70) ;
    v.push_back(80) ;
    v.push_back(90) ;
    v.push_back(100) ;
    cout<< v.capacity() << endl ; // 16

/// when extra capacity is needed, capacity is increased by double

    return 0 ;
}