#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n] ;
    for(int i=0; i<n ; i++){  //O(n)
        cin>> a[i] ;
    }

    int pre[n];
    pre[0]=0 ;
    pre[1] = a[0];
    for(int i=2; i<n; i++){   // O(n)
        pre[i] = pre[i-1] + a[i-1] ;
    }
    
    for(int i=0; i<n ; i++){  //O(n)
        cout<< pre[i] <<" " ;
    }
                              // total = O(n)
    return 0 ;
}

/*
5
1 2 3 4 5
-->> 0 1 3 6 10 
*/