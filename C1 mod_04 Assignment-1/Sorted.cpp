#include<bits/stdc++.h>
using namespace std;

int main(){
    int te;
    cin>> te ;
    for(int i=1; i<=te ; i++){
        int n;
        cin>> n;
        int a[n], b[n] ;
        for(int j=0; j<n ; j++){
             cin>> a[j];
             b[j] = a[j] ;
        }
        sort(b, b+n) ;
        bool flag =true ;

        for(int j=0; j<n ; j++){
            if(a[j]!= b[j]){
                flag= false ;
                break ;
            }
        }

        if(flag== true) cout<<"YES" <<endl ;
        else cout<<"NO" <<endl ;
    }
                                                // O(te * n) -> O(n^2)
    return 0 ;
}