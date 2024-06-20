// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
// useimng prefix sum array

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,q ;
    cin>>n >> q ;
    long long a[n] ;
    for(int i=0 ; i<n ; i++){ //-------- O(n)
        cin >> a[i] ;
    }
    long long pre[n];
    pre[0]= a[0] ;
    for(int i=1; i<n ; i++){  //-------- O(n)
        pre[i] = a[i]+ pre[i-1] ;
    }

    while(q--) { //--------------------- O(q)
        int l,r ;
        cin >>l >> r ;
        l-- ; 
        r-- ;
        long long sum ;

        if(l==0) sum = pre[r];
        else sum= pre[r]- pre[l-1] ;

        cout<< sum <<endl ;
    }
    
    //total time complexity ----------- O(n+ n+ q) -> O(n+q)
    
    return 0 ;
}
/*
6 3
6 4 2 7 2 7
1 3  -> 12
3 6  -> 18
1 6  -> 28

*/