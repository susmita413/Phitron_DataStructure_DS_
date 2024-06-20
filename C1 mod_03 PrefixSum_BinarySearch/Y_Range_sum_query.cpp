// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
//Given 2 numbers N and Q , an array A of N number and 
// Q number of pairs L, R. For each query Q print a single line that contains
// the summation of all numbers from index L to index R.
// bruteForce (TLE)
// 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q ;
    cin>>n >> q ;
    int a[n] ;
    for(int i=0 ; i<n ; i++){ //-------- O(n)
        cin >> a[i] ;
    }

    while(q--) { //--------------------- O(q)
        int l,r ;
        cin >>l >> r ;
        l-- ; 
        r-- ;
        int sum =0 ;
        
        for(int i=l; i<=r ; i++){  //---- O(n*q)
            sum += a[i] ;
        }
        cout<< sum <<endl ;
    }
    
    //total time complexity ----------- O(n+ n*q) -> O(n*q)
    
    return 0 ;
}