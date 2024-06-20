#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n] ;
    for(int i=0; i<n ; i++){  //O(n)
        cin>> a[i] ;
    }

    long long pre[n];
    pre[0]=a[0] ;
    for(int i=1; i<n; i++){   // O(n)
        pre[i] = pre[i-1] + a[i] ;
    }
    
    for(int i=n-1; i>=0 ; i--){  //O(n)
        cout<< pre[i] <<" " ;
    }
                              // total = O(n)
    return 0 ;
}
