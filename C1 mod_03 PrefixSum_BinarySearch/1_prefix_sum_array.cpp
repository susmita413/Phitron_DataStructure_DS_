#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n  ;
    int a[n] ;
    for(int i=0 ; i<n ; i++){ //-------- O(n)
        cin >> a[i] ;
    }

    // PREFIX SUM ARRAY
    int pre[n] ;
    pre[0] =a[0] ;
    for(int i=1 ; i<n ; i++){  //-------- O(n)
        pre[i] = a[i] + pre[i-1] ;
    }

    // output prefix sum array
    for(int s: pre){
        cout <<s << endl ;
    }

// -----------time complexity = O(n+n) -> O(n)

    return 0 ;
}

/* Input---
7
3 7 5 2 7 3 4
*/