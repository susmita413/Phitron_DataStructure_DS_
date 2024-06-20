#include<bits/stdc++.h>
using namespace std;

int main(){
    int n= 7 ;
    int a[n] = {1,3,4,5,7,8,10} ;  // input sorted array -> O(n)
    int x = 822 ;  // search key
    bool flag = false ;

    int l=0 , r=n-1 ;


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
    else cout<< "Not found" << endl ;
                                  // total = O(n+ log n) -> O(n)
                                  
    return 0 ;
}