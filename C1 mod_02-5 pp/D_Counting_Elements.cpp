//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
// You are given an array a of n  integers.
// count the number of element ai in the array such that ai+1 is also exists
// in the array a.  
//If there're duplicates in a , count them separately.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    int n;
    cin>> n;
    
    for(int i=0; i<n; i++){
        int x;  cin>> x ;
        a.push_back(x) ;
    }

    int cnt=0 ;
    for(int i=0; i<n; i++){
        int find_key= a[i]+1 ;
        auto it = find(a.begin(), a.end(), find_key) ;
        if(it != a.end()){
             cnt++ ;
        }
    }

    cout<< cnt ;

    return 0 ;
}