// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
// Given 2 numbers N and Q, array A of N numbers and 
// Q queries each one contains a number X.
// For each query print a single line that contains "found" if the number X
//exists in array A otherwise, print "not found".

// Binary Search 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q ;
    cin>> n >> q ;
    int a[n] ;

    for(int i=0; i<n; i++){ // O(n)
        cin >> a[i] ;
    }
    sort(a, a+n) ;         // O(n * log n)

    while(q--){           // O(q)
        int x; 
        cin>> x ;
        bool flag = false ;
        int l=0, r= n-1 ;

        while(l<=r){                  // O(log n)
            int mid_index = (l+r)/2 ;
            if( a[mid_index] == x){
                flag = true ;
                break ;
            }
            if( x > a[mid_index]){
                l = mid_index +1 ;
            }
            else{
                r = mid_index -1 ;
            }
        }

        if(flag== true) cout<< "found" << endl ;
        else cout<< "not found" << endl ;

    }
                 // O (n + n*log n + q*log n) 
                 // -> O(n* log n)
    return 0 ;
}