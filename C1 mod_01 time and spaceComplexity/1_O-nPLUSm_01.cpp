#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m ;
    cin >>n >> m ;
            // input value n,m. we don't know which is greater

    for(int i=1; i<=n ; i++){          //--- O(n)
        cout<< " Hello " <<i << endl ; 
    }

    for(int i=1; i<=m ; i++){          //--- O(m)
        cout<< "QUEEN " <<i << endl ; 
    }

        // complexity = O(n+m) 

    return 0 ;
}