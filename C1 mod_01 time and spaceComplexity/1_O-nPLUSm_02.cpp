#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5, m=10 , x=8 , z=3 ;
    //cin >>n >> m >> x;
            // input value n,m,x,z. we don't know which is largest 

    for(int i=1; i<=n ; i++){          //--- O(n)
        cout<< " Hello " <<i << endl ; 
    }

    for(int i=1; i<=m ; i++){          //--- O(m)
        cout<< "QUEEN " <<i << endl ; 
    }

    for(int i=1; i<=x ; i++){          //--- O(x)
        cout<< " SUSMI " <<i << endl ; 
    }

    for(int i=1; i<=z ; i++){          //--- O(z)
        cout<< "Brave " <<i << endl ; 
    }

        // complexity = O(n+m+x+z) 

    return 0 ;
}