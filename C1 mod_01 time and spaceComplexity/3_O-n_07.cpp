#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=2 ;
    
    for(int i=0; i<= n*3 ; i++){   // 0 to 6  //--- O(n*3)
            cout <<"HELLO " <<i << endl ;
    }
                                
    for(int i=0; i<=n+6 ; i++){   // 0 to 8  //--- O(n+6)
        cout<<" SUSMI " <<i << endl ;    
    }

    for(int i=0; i>=n-4 ; i--){   // 0 to back -2 //--- O(n-4)
        cout<<"QUEEN " <<i << endl ;    
    }
        
        // complexity = O(3n + n+6 + n-4) -> O(5n+2) 
        //            -> O(n)


    return 0 ;
}