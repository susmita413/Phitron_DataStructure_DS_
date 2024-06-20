// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
// Given two arrays A and B of size N. Print a new array C that
// holds the concatenation of array B followed by array A.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector<int> a;
    vector<int> b ;
    
    for(int i=0; i<n; i++){
        int x;  cin>> x ;
        a.push_back(x) ;
    }

    for(int i=0; i<n; i++){
        int x;  cin>> x ;
        b.push_back(x) ;
    }

    for(int i=0; i<n; i++){
        b.push_back(a[i]) ;
    }

    for(int val: b){
        cout<< val << " " ;
    }


    return 0 ;
}