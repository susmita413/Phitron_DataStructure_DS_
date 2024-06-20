// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
// Given 2 numbers N and Q, array A of N numbers and 
// Q queries each one contains a number X.
// For each query print a single line that contains "found" if the number X
//exists in array A otherwise, print "not found".

// linear Search 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q ;
    cin>> n >> q ;
    int a[n] ;

    for(int i=0; i<n; i++){ // O(n)
        cin >> a[i] ;
    }

    while(q--){
        int x; 
        cin>> x ;
        bool flag = false ;

        for(int i=0 ; i<n; i++){   // O(n*q)
            if(a[i] == x){
                flag = true ; 
                break ;
            }
        }
        if(flag== true) cout<< "found" << endl ;
        else cout<< "not found" << endl ;
    }

    return 0 ;
}