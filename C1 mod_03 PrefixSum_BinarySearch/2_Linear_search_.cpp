#include<bits/stdc++.h>
using namespace std;

int main(){
    int n= 7 ;
    int a[n] = {1,3,4,5,7,8,10} ; // input unsorted array -> O(n)
    int search = 1011 ;
    bool flag = false ;

    for(int i=0; i<n ; i++){      // O(n)
        if(a[i] == search){
            flag = true ;
            break ;
        }
    }

    if(flag== true) cout<< "found" << endl ;
    else cout<< "Not found" << endl ;
    
                                  // total = O(n)
    return 0 ;
}